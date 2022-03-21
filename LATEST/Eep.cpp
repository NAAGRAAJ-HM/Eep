/******************************************************************************/
/* File   : Eep.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.h"
#include "infEep_Version.h"
#include "infEep_EcuM.h"
#include "infEep_Dcm.h"
#include "infEep_SchM.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

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

