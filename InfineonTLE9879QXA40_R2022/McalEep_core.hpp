#pragma once
/******************************************************************************/
/* File   : McalEep_core.hpp                                                      */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_McalEep.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MCALEEP_CORE_FUNCTIONALITIES                                               \
              FUNC(void, MCALEEP_CODE) SetMode        (void);                      \
              FUNC(void, MCALEEP_CODE) Read           (void);                      \
              FUNC(void, MCALEEP_CODE) Write          (void);                      \
              FUNC(void, MCALEEP_CODE) Erase          (void);                      \
              FUNC(void, MCALEEP_CODE) ServiceCompare        (void);                      \
              FUNC(void, MCALEEP_CODE) McalCancel         (void);                      \
              FUNC(void, MCALEEP_CODE) GetStatus      (void);                      \
              FUNC(void, MCALEEP_CODE) GetJobResult   (void);                      \

#define MCALEEP_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, MCALEEP_CODE) SetMode        (void) = 0;                  \
      virtual FUNC(void, MCALEEP_CODE) Read           (void) = 0;                  \
      virtual FUNC(void, MCALEEP_CODE) Write          (void) = 0;                  \
      virtual FUNC(void, MCALEEP_CODE) Erase          (void) = 0;                  \
      virtual FUNC(void, MCALEEP_CODE) ServiceCompare        (void) = 0;                  \
      virtual FUNC(void, MCALEEP_CODE) McalCancel         (void) = 0;                  \
      virtual FUNC(void, MCALEEP_CODE) GetStatus      (void) = 0;                  \
      virtual FUNC(void, MCALEEP_CODE) GetJobResult   (void) = 0;                  \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_McalEep_Functionality{
   public:
      MCALEEP_CORE_FUNCTIONALITIES_VIRTUAL
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

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

