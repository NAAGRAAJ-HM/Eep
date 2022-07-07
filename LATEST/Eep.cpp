/******************************************************************************/
/* File   : Eep.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "Eep.hpp"
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
         lptrCfg = lptrCfgModule;
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

FUNC(void, EEP_CODE) module_Eep::DeInitFunction(
   void
){
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

FUNC(void, EEP_CODE) module_Eep::MainFunction(
   void
){
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

FUNC(void, EEP_CODE) module_Eep::SetMode(
   void
){
}

FUNC(void, EEP_CODE) module_Eep::Read(
   void
){
}

FUNC(void, EEP_CODE) module_Eep::Write(
   void
){
}

FUNC(void, EEP_CODE) module_Eep::Erase(
   void
){
}

FUNC(void, EEP_CODE) module_Eep::Compare(
   void
){
}

FUNC(void, EEP_CODE) module_Eep::Cancel(
   void
){
}

FUNC(void, EEP_CODE) module_Eep::GetStatus(
   void
){
}

FUNC(void, EEP_CODE) module_Eep::GetJobResult(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

