
#ifndef INCLUDE_JAKUB_MAIN_APP_H_
#define INCLUDE_JAKUB_MAIN_APP_H_

#include "FreeRTOS.h"
#include "timers.h"
#include "task.h"
#include "queue.h"
#include "printMsg.h"
#include "printMsgTask.h"
#include "queueTask.h"


void main_app();

void PrintTask(void* pvParameters);

#endif /* INCLUDE_JAKUB_MAIN_APP_H_ */
