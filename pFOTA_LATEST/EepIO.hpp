

#ifndef __EEP_IO_H__
#define __EEP_IO_H__

#define DRVEEP_DUMMY_VERSION           0x0201u
#define DRVEEP_DUMMY_RELEASE_VERSION   0x01u

#define IO_DRIVERMODUS    SYNCRON
#define IO_DEVICETYPE     RANDOM

#ifndef V_API_NEAR
#define V_API_NEAR
#endif

#define EEPROM_DRIVER_VERSION_MAJOR (EEP_IO_VERSION >> 8u)
#define EEPROM_DRIVER_VERSION_MINOR (EEP_IO_VERSION & 0xFFu)
#define EEPROM_DRIVER_VERSION_PATCH 0x00u

#define EepromDriver_GetVersionOfDriver()  ((IO_U32)(EEPROM_DRIVER_VERSION_MAJOR << 16u) | \
                                            (IO_U32)(EEPROM_DRIVER_VERSION_MINOR << 8u)  | \
                                                     EEPROM_DRIVER_VERSION_PATCH)

#define EEPDUMMY_FULL_START_SEC_CODE
#include "MemMap.hpp"

IO_ErrorType V_API_NEAR EepromDriver_InitSync( void * );
IO_ErrorType V_API_NEAR EepromDriver_DeinitSync( void * );
IO_ErrorType V_API_NEAR EepromDriver_VerifySync( void * );
IO_ErrorType V_API_NEAR EepromDriver_RReadSync( IO_MemPtrType, IO_SizeType, IO_PositionType );
IO_ErrorType V_API_NEAR EepromDriver_RWriteSync( IO_MemPtrType, IO_SizeType, IO_PositionType );
IO_ErrorType V_API_NEAR EepromDriver_REraseSync( IO_SizeType, IO_PositionType );

#define EEPDUMMY_FULL_STOP_SEC_CODE
#include "MemMap.hpp"

#endif

