
#include "printMsgTask.h"


void printMsgTask(const uint8_t *message)
{
	while(1)
	{
		printMsg(message);
		vTaskDelay(1000);
	}
}
