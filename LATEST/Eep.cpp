/******************************************************************************/
/* File   : Eep.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.h"
#include "Eep_Cfg.h"
#include "infEep_EcuM.h"
#include "infEep_Dcm.h"
#include "infEep_SchM.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define EEP_AR_RELEASE_MAJOR_VERSION                                           4
#define EEP_AR_RELEASE_MINOR_VERSION                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(EEP_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible EEP_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(EEP_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible EEP_AR_RELEASE_MINOR_VERSION!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Eep:
      public abstract_module
{
   public:
      FUNC(void, EEP_CODE) InitFunction   (void);
      FUNC(void, EEP_CODE) DeInitFunction (void);
      FUNC(void, EEP_CODE) GetVersionInfo (void);
      FUNC(void, EEP_CODE) MainFunction   (void);

   private:
      CONST(Std_TypeVersionInfo, EEP_CONST) VersionInfo = {
            0x0000
         ,  0xFFFF
         ,  0x01
         ,  '0'
         ,  '1'
         ,  '0'
      };
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Eep, EEP_VAR) Eep;
CONSTP2VAR(infEcuMClient, EEP_VAR, EEP_CONST) gptrinfEcuMClient_Eep = &Eep;
CONSTP2VAR(infDcmClient,  EEP_VAR, EEP_CONST) gptrinfDcmClient_Eep  = &Eep;
CONSTP2VAR(infSchMClient, EEP_VAR, EEP_CONST) gptrinfSchMClient_Eep = &Eep;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, EEP_CODE) module_Eep::InitFunction(void){
   Eep.IsInitDone = E_OK;
}

FUNC(void, EEP_CODE) module_Eep::DeInitFunction(void){
   Eep.IsInitDone = E_NOT_OK;
}

FUNC(void, EEP_CODE) module_Eep::GetVersionInfo(void){
#if(STD_ON == Eep_DevErrorDetect)
//TBD: API parameter check
   Det_ReportError(
   );
#endif
}

FUNC(void, EEP_CODE) module_Eep::MainFunction(void){
}

#include "Eep_Unused.h"

FUNC(void, EEP_CODE) class_Eep_Unused::SetMode(void){
}

FUNC(void, EEP_CODE) class_Eep_Unused::Read(void){
}

FUNC(void, EEP_CODE) class_Eep_Unused::Write(void){
}

FUNC(void, EEP_CODE) class_Eep_Unused::Erase(void){
}

FUNC(void, EEP_CODE) class_Eep_Unused::Compare(void){
}

FUNC(void, EEP_CODE) class_Eep_Unused::Cancel(void){
}

FUNC(void, EEP_CODE) class_Eep_Unused::GetStatus(void){
}

FUNC(void, EEP_CODE) class_Eep_Unused::GetJobResult(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

