/******************************************************************************/
/* File   : Eep.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "infEep_EcuM.hpp"
#include "infEep_Dcm.hpp"
#include "infEep_SchM.hpp"

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
      module_Eep(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, _CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, _CONFIG_DATA, _APPL_CONST) lptrCfgModule
      );
      FUNC(void, EEP_CODE) InitFunction   (void);
      FUNC(void, EEP_CODE) DeInitFunction (void);
      FUNC(void, EEP_CODE) MainFunction   (void);
};

extern VAR(module_Eep, EEP_VAR) Eep;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, EEP_VAR, EEP_CONST) gptrinfEcuMClient_Eep = &Eep;
CONSTP2VAR(infDcmClient,  EEP_VAR, EEP_CONST) gptrinfDcmClient_Eep  = &Eep;
CONSTP2VAR(infSchMClient, EEP_VAR, EEP_CONST) gptrinfSchMClient_Eep = &Eep;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
#include "CfgEep.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Eep, EEP_VAR) Eep(
   {
         0x0000
      ,  0xFFFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, EEP_CODE) module_Eep::InitFunction(
   CONSTP2CONST(CfgEep_Type, CFGEEP_CONFIG_DATA, CFGEEP_APPL_CONST) lptrCfgEep
){
   if(NULL_PTR == lptrCfgEep){
#if(STD_ON == Eep_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
// check lptrCfgEep for memory faults
// use PBcfg_Eep as back-up configuration
   }
   Eep.IsInitDone = E_OK;
}

FUNC(void, EEP_CODE) module_Eep::DeInitFunction(void){
   Eep.IsInitDone = E_NOT_OK;
}

FUNC(void, EEP_CODE) module_Eep::MainFunction(void){
}

class class_Eep_Unused{
   public:
      FUNC(void, EEP_CODE) SetMode        (void);
      FUNC(void, EEP_CODE) Read           (void);
      FUNC(void, EEP_CODE) Write          (void);
      FUNC(void, EEP_CODE) Erase          (void);
      FUNC(void, EEP_CODE) Compare        (void);
      FUNC(void, EEP_CODE) Cancel         (void);
      FUNC(void, EEP_CODE) GetStatus      (void);
      FUNC(void, EEP_CODE) GetJobResult   (void);
};

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

