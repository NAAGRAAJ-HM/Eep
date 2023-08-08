

#define EEPIO_SOURCE

#include "EepInc.hpp"

#if( DRVEEP_DUMMY_VERSION != 0x0201u ) || \
    ( DRVEEP_DUMMY_RELEASE_VERSION != 0x01u )
# error "Error in EepIO.c: Source and header file are inconsistent!"
#endif

#define EEP_ALIGN_LENGTH(len, alignment)     ((((len) + ((alignment) - 1u)) / (alignment)) * (alignment))

#define EEP_INIT_FLAG               0x55u
#define EEP_INIT_FLAG_SIZE          0x01u

#if !defined( EEP_BUFFER_SIZE )
# if defined( kEepSizeOfEeprom )

#  define EEP_BUFFER_SIZE           EEP_ALIGN_LENGTH(kEepSizeOfEeprom + EEP_INIT_FLAG_SIZE, 4u)
# else
#  define EEP_BUFFER_SIZE           0x100u
# endif
#endif

#define EEP_BUFFER_SIZE_WRITEABLE   (EEP_BUFFER_SIZE - EEP_INIT_FLAG_SIZE)

# define EEP_BASE_ADDRESS           ((vuint32)eepData)

#define EEPDUMMY_START_SEC_VAR
#include "MemMap.hpp"
V_MEMRAM0 static V_MEMRAM1 IO_U8 V_MEMRAM2 eepData[EEP_BUFFER_SIZE];
#define EEPDUMMY_STOP_SEC_VAR
#include "MemMap.hpp"

#define EEPDUMMY_FULL_START_SEC_CODE
#include "MemMap.hpp"

static IO_ErrorType EepromDriver_CheckRangeContained( IO_SizeType length, IO_PositionType address );

static IO_ErrorType EepromDriver_CheckRangeContained( IO_SizeType length, IO_PositionType address ){
   IO_ErrorType result;

   if(   (address >= EEP_BASE_ADDRESS)
       && ((address - EEP_BASE_ADDRESS) < EEP_BUFFER_SIZE_WRITEABLE)
       && (length <= EEP_BUFFER_SIZE_WRITEABLE)
       && ((address - EEP_BASE_ADDRESS) <= (EEP_BUFFER_SIZE_WRITEABLE - length))){
      result = IO_E_OK;
   }
   else{
      assertFblUser(0u, kFblSysAssertParameterOutOfRange);
      result = IO_E_NOT_OK;
   }

   return result;
}

IO_ErrorType V_API_NEAR EepromDriver_InitSync( void * address ){
   IO_SizeType i;

#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   (void)address;
#endif

   if(EEP_INIT_FLAG != eepData[EEP_BUFFER_SIZE_WRITEABLE]){
      for (i = 0u; i < EEP_BUFFER_SIZE_WRITEABLE; i++)
      {
         eepData[i] = 0xFFu;
      }

      eepData[EEP_BUFFER_SIZE_WRITEABLE] = EEP_INIT_FLAG;
   }

   return IO_E_OK;
}

IO_ErrorType V_API_NEAR EepromDriver_DeinitSync( void * address ){
#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   (void)address;
#endif

   return IO_E_OK;
}

IO_ErrorType V_API_NEAR EepromDriver_RWriteSync( IO_MemPtrType writeBuffer, IO_SizeType writeLength, IO_PositionType writeAddress ){
   IO_ErrorType result;

   result = EepromDriver_CheckRangeContained(writeLength, writeAddress);

   if(IO_E_OK == result){
      (void)MEMCPY((IO_MemPtrType)writeAddress, writeBuffer, writeLength);
   }

   return result;
}

IO_ErrorType V_API_NEAR EepromDriver_REraseSync( IO_SizeType eraseLength, IO_PositionType eraseAddress ){
   IO_ErrorType result;

#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   (void)eraseLength;
   (void)eraseAddress;
#endif

   result = EepromDriver_CheckRangeContained(eraseLength, eraseAddress);

   return result;
}

IO_ErrorType V_API_NEAR EepromDriver_RReadSync( IO_MemPtrType readBuffer, IO_SizeType readLength, IO_PositionType readAddress ){
   IO_ErrorType result;

   result = EepromDriver_CheckRangeContained(readLength, readAddress);

   if(IO_E_OK == result){
      (void)MEMCPY(readBuffer, (IO_MemPtrType)readAddress, readLength);
   }

   return result;
}

IO_ErrorType V_API_NEAR EepromDriver_VerifySync( void * address ){
#if defined( V_ENABLE_USE_DUMMY_STATEMENT )
   (void)address;
#endif

   return IO_E_OK;
}

#define EEPDUMMY_FULL_STOP_SEC_CODE
#include "MemMap.hpp"

