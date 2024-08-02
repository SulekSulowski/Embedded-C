#include "queueTask.h"


QueueHandle_t Queue;
uint32_t length = 5;

void mainQueue()
{
	Queue = xQueueCreate(length, sizeof(uint32_t));

	if(Queue != NULL)
	{
		xTaskCreate(sendToQueueTask, "sender task", 1024, (void*) 100, 1, NULL);
		xTaskCreate(receiveFromQueueTask, "receiver task", 1024, NULL, 2, NULL);


	}
}

void sendToQueueTask(void* pvParameters)
{
	uint32_t value = (uint32_t) pvParameters;

	while(1)
	{
		BaseType_t state = xQueueSend(Queue, &value, 0);

		if(state == pdPASS)
		{
			printMsg("sent to queue");
		}
		else
		{
			printMsg("can not send to queue");
		}
	}
}



void receiveFromQueueTask(void* pvParameters)
{
	uint32_t value;

	while(1)
	{
		BaseType_t state = xQueueReceive(Queue, &value, pdMS_TO_TICKS(250));

		if(state == pdPASS)
		{
			printMsg("received from queue");
		}
		else
		{
			printMsg("can not receive from queue");
		}
	}
}
