
#ifndef INCLUDE_JAKUB_PRINTMSGTASK_H_
#define INCLUDE_JAKUB_PRINTMSGTASK_H_

#include "FreeRTOS.h"
#include "timers.h"
#include "task.h"
#include "queue.h"
#include "printMsg.h"




void printMsgTask(const uint8_t *message);



#endif /* INCLUDE_JAKUB_PRINTMSGTASK_H_ */
