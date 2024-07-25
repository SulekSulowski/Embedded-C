
#include "printMsgTask.h"


void printMsgTask(const uint8_t *message)
{
	TickType_t xLastWakeTime;

	const TickType_t time = pdMS_TO_TICKS(1000);

	xLastWakeTime = xTaskGetTickCount();

	while(1)
	{
		printMsg(message);
		vTaskDelayUntil(&xLastWakeTime, time);
	}
}
