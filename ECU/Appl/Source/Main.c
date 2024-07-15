#include "EcuM.h"
#include "Os.h"


TASK(InitTask)
{
  EcuM_StartupTwo();    

  TerminateTask();
}
