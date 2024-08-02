
#include "main_app.h"


void main_app()
{
	mainPrintMsg();
	mainQueue();

	vTaskStartScheduler();

	while(1)
	{

	}
}

