/*****************************************************/
/* File   : FrIf.cpp                                 */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "infFrIf_EcuM.h"
#include "infFrIf_SchM.h"
#include "FrIf_Unused.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_FrIf:
      public abstract_module
{
   public:
      FUNC(void, FRIF_CODE) InitFunction   (void);
      FUNC(void, FRIF_CODE) DeInitFunction (void);
      FUNC(void, FRIF_CODE) GetVersionInfo (void);
      FUNC(void, FRIF_CODE) MainFunction   (void);
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
module_FrIf    FrIf;
infEcuMClient* gptrinfEcuMClient_FrIf = &FrIf;
infDcmClient*  gptrinfDcmClient_FrIf  = &FrIf;
infSchMClient* gptrinfSchMClient_FrIf = &FrIf;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, FRIF_CODE) module_FrIf::InitFunction(void){
}

FUNC(void, FRIF_CODE) module_FrIf::DeInitFunction(void){
}

FUNC(void, FRIF_CODE) module_FrIf::GetVersionInfo(void){
}

FUNC(void, FRIF_CODE) module_FrIf::MainFunction(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetVersionInfo(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::ControllerInit(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::StartCommunication(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::HaltCommunication(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::AbortCommunication(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetState(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::SetState(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::SetWakeupChannel(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::SendWUP(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetSyncState(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::SetExtSync(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetPOCStatus(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetGlobalTime(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::AllowColdStart(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetMacroticksDuration(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::Transmit(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::SetTransceiverMode(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetTransceiverMode(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetTransceiverWUReason(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::EnableTransceiverWakeup(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::DisableTransceiverWakeup(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::ClearTransceiverWakeup(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetCycleLength(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::SetAbsoluteTimer(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::SetRelativeTimer(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::CancelAbsoluteTimer(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::CancelRelativeTimer(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::EnableAbsoluteTimerIRQ(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::EnableRelativeTimerIRQ(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetAbsoluteTimerIRQStatus(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetRelativeTimerIRQStatus(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::AckAbsoluteTimerIRQ(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::AckRelativeTimerIRQ(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::DisableAbsoluteTimerIRQ(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::DisableRelativeTimerIRQ(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetNmVector(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetClockCorrection(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetChannelStatus(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::ReadCCConfig(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetWakeupRxStatus(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::JobListExec(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::CbWakeupByTransceiver(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

