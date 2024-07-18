
#include "printMsg.h"


void printMsg(char * message)
{
	uint16_t length = sizeof(message)/sizeof(message[0]);

	HAL_UART_Transmit_IT(&huart3, message, length);
}
