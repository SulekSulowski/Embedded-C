
#include "main_app.h"



char * pvParameters = "print message";

void main_app()
{
	xTaskCreate(printMsgTask, "printTask", 1024, pvParameters, 1, NULL);

	vTaskStartScheduler();

	while(1)
	{

	}
}

