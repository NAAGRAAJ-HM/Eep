/*****************************************************/
/* File   : Eep.cpp                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "infEep_EcuM.h"
#include "infEep_SchM.h"
#include "Eep_Unused.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_Eep:
      public abstract_module
{
   public:
      FUNC(void, EEP_CODE) InitFunction   (void);
      FUNC(void, EEP_CODE) DeInitFunction (void);
      FUNC(void, EEP_CODE) GetVersionInfo (void);
      FUNC(void, EEP_CODE) MainFunction   (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_Eep     Eep;
infEcuMClient* gptrinfEcuMClient_Eep = &Eep;
infDcmClient*  gptrinfDcmClient_Eep  = &Eep;
infSchMClient* gptrinfSchMClient_Eep = &Eep;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, EEP_CODE) module_Eep::InitFunction(void){
}

FUNC(void, EEP_CODE) module_Eep::DeInitFunction(void){
}

FUNC(void, EEP_CODE) module_Eep::GetVersionInfo(void){
}

FUNC(void, EEP_CODE) module_Eep::MainFunction(void){
}

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

FUNC(void, EEP_CODE) class_Eep_Unused::GetVersionInfo(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

