/*****************************************************/
/* File   : Eep.cpp                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "Eep_EcuM.h"
#include "Eep_SchM.h"
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
   ,  public interface_Eep_EcuM
   ,  public interface_Eep_SchM
{
   public:
      FUNC(void, EEP_CODE) InitFunction   (void);
      FUNC(void, EEP_CODE) DeInitFunction (void);
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
module_Eep Eep;

interface_Eep_EcuM *EcuM_Client_ptr_Eep = &Eep;
interface_Eep_SchM *SchM_Client_ptr_Eep = &Eep;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, EEP_CODE) module_Eep::InitFunction(void){
}

FUNC(void, EEP_CODE) module_Eep::DeInitFunction(void){
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

