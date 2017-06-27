/*
 *  Copyright (c) 2017 Suprema Co., Ltd. All Rights Reserved.
 * 
 *  This software is the confidential and proprietary information of 
 *  Suprema Co., Ltd. ("Confidential Information").  You shall not
 *  disclose such Confidential Information and shall use it only in
 *  accordance with the terms of the license agreement you entered into
 *  with Suprema.
 */


#ifndef __UNIFINGE3500IO_H__
#define __UNIFINGE3500IO_H__

#define UF_NUM_OF_INPUT				3
#define UF_NUM_OF_OUTPUT			6
#define UF_MAX_OUTPUT_PER_PORT		48
#define UF_MAX_OUTPUT_EVENT 		150

typedef struct test1{
	unsigned short delay;
	unsigned short count;
	unsigned short active;
	unsigned short inactive;
} UFOutputSignal;

typedef enum test2{
	UF_INPUT_NO_ACTION					= 0x00,
	UF_INPUT_ENROLL						= 0x10,
	UF_INPUT_IDENTIFY					= 0x30,
	UF_INPUT_DELETE						= 0x40,
	UF_INPUT_DELETE_ALL					= 0x49,
	UF_INPUT_ENROLL_BY_WIEGAND			= 0x11,
	UF_INPUT_VERIFY_BY_WIEGAND			= 0x21,
	UF_INPUT_DELETE_BY_WIEGAND			= 0x41,
	UF_INPUT_ENROLL_VERIFICATION					= 0x1a,
	UF_INPUT_ENROLL_BY_WIEGAND_VERIFICATION			= 0x1b,
	UF_INPUT_DELETE_VERIFICATION					= 0x4a,
	UF_INPUT_DELETE_BY_WIEGAND_VERIFICATION			= 0x4b,
	UF_INPUT_DELETE_ALL_VERIFICATION				= 0x4c,
	UF_INPUT_CANCEL									= 0x60,
	UF_INPUT_TAMPER_SWITCH_IN						= 0x66,
	UF_INPUT_RESET									= 0x69,
} UF_INPUT_FUNC;

typedef enum test3{
	UF_INPUT_PORT0		= 0x00,
	UF_INPUT_PORT1		= 0x01,
	UF_INPUT_PORT2		= 0x02,
} UF_INPUT_PORT;


typedef enum test4{
	UF_OUTPUT_CLEAR_ALL_EVENTS			= 0x00,
	UF_OUTPUT_ENROLL_WAIT_WIEGAND	= 0x13,
	UF_OUTPUT_ENROLL_WAIT_FINGER		= 0x14,
	UF_OUTPUT_ENROLL_PROCESSING			= 0x15,
	UF_OUTPUT_ENROLL_BAD_FINGER			= 0x16,
	UF_OUTPUT_ENROLL_SUCCESS			= 0x17,
	UF_OUTPUT_ENROLL_FAIL				= 0x18,
	UF_OUTPUT_VERIFY_WAIT_WIEGAND	= 0x23,
	UF_OUTPUT_VERIFY_WAIT_FINGER		= 0x24,
	UF_OUTPUT_VERIFY_PROCESSING			= 0x25,
	UF_OUTPUT_VERIFY_BAD_FINGER			= 0x26,
	UF_OUTPUT_VERIFY_SUCCESS			= 0x27,
	UF_OUTPUT_VERIFY_FAIL				= 0x28,
	UF_OUTPUT_IDENTIFY_WAIT_FINGER	= 0x34,
	UF_OUTPUT_IDENTIFY_PROCESSING		= 0x35,
	UF_OUTPUT_IDENTIFY_BAD_FINGER		= 0x36,
	UF_OUTPUT_IDENTIFY_SUCCESS			= 0x37,
	UF_OUTPUT_IDENTIFY_FAIL				= 0x38,
	UF_OUTPUT_DELETE_WAIT_WIEGAND	= 0x43,
	UF_OUTPUT_DELETE_WAIT_FINGER		= 0x44,
	UF_OUTPUT_DELETE_PROCESSING			= 0x45,
	UF_OUTPUT_DELETE_BAD_FINGER			= 0x46,
	UF_OUTPUT_DELETE_SUCCESS			= 0x47,
	UF_OUTPUT_DELETE_FAIL				= 0x48,
	UF_OUTPUT_DETECT_INPUT0				= 0x54,
	UF_OUTPUT_DETECT_INPUT1				= 0x55,
	UF_OUTPUT_DETECT_INPUT2				= 0x56,	
	UF_OUTPUT_DETECT_WIEGAND			= 0x57,
	UF_OUTPUT_DETECT_FINGER				= 0x58,
	UF_OUTPUT_END_PROCESSING			= 0x59,

	UF_OUTPUT_VERIFY_DURESS				= 0x62,
	UF_OUTPUT_IDENTIFY_DURESS			= 0x63,
	UF_OUTPUT_TAMPER_SWITCH_ON			= 0x64,
	UF_OUTPUT_TAMPER_SWITCH_OFF			= 0x65,

	UF_OUTPUT_SYS_STARTED				= 0x6a,
	UF_OUTPUT_WATCHDOG					= 0x6b,
	UF_OUTPUT_THREAD_FAIL				= 0x6c,

	UF_OUTPUT_IDENTIFY_NOT_GRANTED	  	= 0x6d,
	UF_OUTPUT_VERIFY_NOT_GRANTED		= 0x6e,

	UF_OUTPUT_DETECT_SMARTCARD			= 0x70,
	UF_OUTPUT_BAD_SMARTCARD				= 0x71,
	UF_OUTPUT_WAIT_SMARTCARD			= 0x7a,
} UF_OUTPUT_EVENT;


typedef enum test5{
	UF_OUTPUT_PORT0		= 0x00,
	UF_OUTPUT_PORT1		= 0x01,
	UF_OUTPUT_PORT2		= 0x02,
	UF_OUTPUT_LED0		= 0x03,
	UF_OUTPUT_LED1		= 0x04,
	UF_OUTPUT_LED2		= 0x05,
} UF_OUTPUT_PORT;


typedef struct test6{
	unsigned short eventID;
	unsigned short duration;
} UFConfigInputItem;

typedef struct test7{
	unsigned short portID;
	unsigned short eventID;
	UFOutputSignal signal;
} UFConfigOutputItem;


typedef struct test8{
	UFConfigInputItem input[UF_NUM_OF_INPUT];
	int numOfOutputItem;
	UFConfigOutputItem output[1];	
} UFConfigIO;



#endif
