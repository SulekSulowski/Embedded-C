
#include "printMsgTask.h"


char *text = "H";

void mainPrintMsg()
{
	xTaskCreate(printMsgTask, "print task", 1024, (void*) text, 3, NULL);
}



void printMsgTask(void *pvParameters)
{
	const uint8_t* message = (const uint8_t *) pvParameters;

	const TickType_t time = pdMS_TO_TICKS(100);

	while(1)
	{
		printMsg(message);
		vTaskDelay(time);
	}
}
