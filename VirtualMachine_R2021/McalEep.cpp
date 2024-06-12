/******************************************************************************/
/* File   : McalEep.cpp                                                           */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "McalEep.hpp"
#include "infMcalEep_Imp.hpp"

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
VAR(module_McalEep, EEP_VAR) McalEep;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, EEP_CODE) module_McalEep::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, EEP_CONST,       EEP_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   EEP_CONFIG_DATA, EEP_APPL_CONST) lptrCfgModule
){
#if(STD_ON == McalEep_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstMcalEep_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == McalEep_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == McalEep_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == McalEep_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  EEP_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, EEP_CODE) module_McalEep::DeInitFunction(
   void
){
#if(STD_ON == McalEep_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalEep_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == McalEep_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  EEP_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, EEP_CODE) module_McalEep::MainFunction(
   void
){
#if(STD_ON == McalEep_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalEep_InitCheck)
   }
   else{
#if(STD_ON == McalEep_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  EEP_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, EEP_CODE) module_McalEep::SetMode(
   void
){
}

FUNC(void, EEP_CODE) module_McalEep::Read(
   void
){
}

FUNC(void, EEP_CODE) module_McalEep::Write(
   void
){
}

FUNC(void, EEP_CODE) module_McalEep::Erase(
   void
){
}

FUNC(void, EEP_CODE) module_McalEep::ServiceCompare(
   void
){
}

FUNC(void, EEP_CODE) module_McalEep::McalCancel(
   void
){
}

FUNC(void, EEP_CODE) module_McalEep::GetStatus(
   void
){
}

FUNC(void, EEP_CODE) module_McalEep::GetJobResult(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

