/******************************************************************************/
/* File   : Eep.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgEep.hpp"
#include "Eep_core.hpp"
#include "infEep_Exp.hpp"
#include "infEep_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define EEP_AR_RELEASE_VERSION_MAJOR                                           4
#define EEP_AR_RELEASE_VERSION_MINOR                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(EEP_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible EEP_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(EEP_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible EEP_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Eep:
      INTERFACES_EXPORTED_EEP
      public abstract_module
   ,  public class_Eep_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
            Std_TypeReturn          IsInitDone{E_NOT_OK};
      const CfgModule_TypeAbstract* lptrCfg{(CfgModule_TypeAbstract*)NULL_PTR};

   public:
      module_Eep(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, EEP_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, EEP_CONFIG_DATA, EEP_APPL_CONST) lptrCfgModule
      );
      FUNC(void, EEP_CODE) DeInitFunction (void);
      FUNC(void, EEP_CODE) MainFunction   (void);
      EEP_CORE_FUNCTIONALITIES
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

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Eep, EEP_VAR) Eep(
   {
#if(STD_ON == _ReSIM)
         "Eep"
#else
#endif
      ,  EEP_AR_RELEASE_VERSION_MAJOR
      ,  EEP_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
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
   CONSTP2CONST(CfgModule_TypeAbstract, EEP_CONFIG_DATA, EEP_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Eep_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(NULL_PTR != lptrCfgModule){
         if(STD_HIGH){
            lptrCfg = lptrCfgModule;
         }
         else{
            lptrCfg = &PBcfgEep;
         }
      }
      else{
#if(STD_ON == Eep_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == Eep_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == Eep_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  EEP_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, EEP_CODE) module_Eep::DeInitFunction(void){
#if(STD_ON == Eep_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Eep_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == Eep_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  EEP_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, EEP_CODE) module_Eep::MainFunction(void){
#if(STD_ON == Eep_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Eep_InitCheck)
   }
   else{
#if(STD_ON == Eep_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  EEP_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, EEP_CODE) module_Eep::SetMode(void){
}

FUNC(void, EEP_CODE) module_Eep::Read(void){
}

FUNC(void, EEP_CODE) module_Eep::Write(void){
}

FUNC(void, EEP_CODE) module_Eep::Erase(void){
}

FUNC(void, EEP_CODE) module_Eep::Compare(void){
}

FUNC(void, EEP_CODE) module_Eep::Cancel(void){
}

FUNC(void, EEP_CODE) module_Eep::GetStatus(void){
}

FUNC(void, EEP_CODE) module_Eep::GetJobResult(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

