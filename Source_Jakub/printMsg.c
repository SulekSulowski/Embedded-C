
#include "printMsg.h"

void printMsg(const uint8_t *message)
{
	uint16_t length = strlen((void*)message);

	HAL_UART_Transmit(&huart3, message, length, 1);
	HAL_UART_Transmit(&huart3,(void*) "\r\n", 1, 1);
}
