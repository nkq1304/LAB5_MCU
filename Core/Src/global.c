#include "global.h"

int status_uart = UART_INIT;
int status_command_ok = INIT;
int status_command_rst = INIT;
uint8_t temp = 0;
uint8_t index_buffer = 0;
uint8_t buffer_flag = 0;
uint32_t ADC_value = 1234;
uint8_t buffer[MAX_BUFFER_SIZE];
char str[20];
