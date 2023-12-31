/*
 * global.h
 *
 *  Created on: Dec 20, 2023
 *      Author: Hii
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"

#define INIT_STR 		0
#define WAIT_END		1

#define WAIT_RST 		10
#define SEND_ADC		11
#define WAIT_OK 		12
#define MAX_BUFFER_SIZE 30

extern int status_parser;
extern int status_uart;

extern uint8_t temp;
extern uint8_t buffer[MAX_BUFFER_SIZE];
extern uint8_t index_buffer;
extern uint8_t buffer_flag;

extern uint8_t command_flag;
extern uint8_t command[MAX_BUFFER_SIZE];
extern uint8_t command_index;

extern char str[50];

extern uint32_t ADC_value;

#endif /* INC_GLOBAL_H_ */
