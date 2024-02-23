#include "EcuM.h"
#include "Os.h"

int main(void)
{
  EcuM_Init();    
  return 0;
}

TASK(InitTask)
{
  EcuM_StartupTwo();    

  TerminateTask();
}

boolean Appl_DetEntryCallout(uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
{
  return FALSE;
}