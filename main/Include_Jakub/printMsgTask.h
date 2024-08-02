
#ifndef INCLUDE_JAKUB_PRINTMSGTASK_H_
#define INCLUDE_JAKUB_PRINTMSGTASK_H_

#include "FreeRTOS.h"
#include "timers.h"
#include "task.h"
#include "printMsg.h"


void mainPrintMsg();
void printMsgTask(void *pvParameters);



#endif /* INCLUDE_JAKUB_PRINTMSGTASK_H_ */
