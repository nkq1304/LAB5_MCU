#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_
#include "command_parser_fsm.h"
#include "software_timer.h"
#include "stdio.h"
#include <stdint.h>

#define		INIT		255

#define		RST_INIT	0
#define		RST_R		1
#define		RST_S		2
#define		RST_T		3
#define		RST_END		4

#define		OK_INIT		10
#define		OK_O		11
#define		OK_K		12
#define		OK_END		13

#define		UART_INIT	20
#define		UART_SEND	21
#define		UART_END	22


extern int status_command_rst;
extern int status_command_ok;
extern int status_uart;
#define MAX_BUFFER_SIZE 30
extern uint8_t temp;
extern uint8_t buffer[MAX_BUFFER_SIZE];
extern uint8_t index_buffer;
extern uint8_t buffer_flag;
extern uint32_t ADC_value;
extern char str[20];
#endif /* INC_GLOBAL_H_ */
