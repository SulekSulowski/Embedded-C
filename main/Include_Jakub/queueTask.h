
#ifndef INCLUDE_JAKUB_QUEUETASK_H_
#define INCLUDE_JAKUB_QUEUETASK_H_

#include "FreeRTOS.h"
#include "timers.h"
#include "task.h"
#include "queue.h"
#include "printMsg.h"
#include "printMsgTask.h"

void mainQueue();
void sendToQueueTask(void* pvParameters);
void receiveFromQueueTask(void* pvParameters);

#endif /* INCLUDE_JAKUB_QUEUETASK_H_ */
