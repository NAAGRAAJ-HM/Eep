#pragma once

#include "Std_Types.h"
#include "Compiler_Cfg_Eep.h"

class class_Eep{
   public:
      FUNC(void, EEP_CODE) InitFunction   (void);
      FUNC(void, EEP_CODE) SetMode        (void);
      FUNC(void, EEP_CODE) Read           (void);
      FUNC(void, EEP_CODE) Write          (void);
      FUNC(void, EEP_CODE) Erase          (void);
      FUNC(void, EEP_CODE) Compare        (void);
      FUNC(void, EEP_CODE) Cancel         (void);
      FUNC(void, EEP_CODE) GetStatus      (void);
      FUNC(void, EEP_CODE) GetJobResult   (void);
      FUNC(void, EEP_CODE) GetVersionInfo (void);
      FUNC(void, EEP_CODE) MainFunction   (void);
};

extern class_Eep Eep;

