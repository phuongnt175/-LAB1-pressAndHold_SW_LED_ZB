/*
 * main.c
 *
 *  Created on: Feb 24, 2023
 *      Author: admin1
 */


#include "app/framework/include/af.h"
#include "Source/Mid/Button/button.h"
#include "Source/Mid/Led/Led.h"
#include "math.h"
#include "main.h"

void Main_ButtonPressCallbackHandler(uint8_t button, BUTTON_Event_t pressHandler);
void Main_ButtonHoldCallbackHandler(uint8_t button, BUTTON_Event_t holdingHandler);

/*
 * * @brief Main Init
 */
void emberAfMainInitCallback(void)
{
	emberAfCorePrintln("Main Init");
	ledInit();
	buttonInit(Main_ButtonHoldCallbackHandler, Main_ButtonPressCallbackHandler);
}


/****************************EVENT HANDLER MIDDER********************************************************************/
/*
 * @func	Main_ButtonPressCallbackHandler
 * @brief	Event Button Handler
 * @param	button, pressHandler
 * @retval	None
 */
void Main_ButtonPressCallbackHandler(uint8_t button, BUTTON_Event_t pressHandler)
{
	switch(pressHandler)
		{
			case press_1:
				if(button == SW_1){
					emberAfCorePrintln("SW1: 1 time");
					turnOnLed(LED1,ledRed);
				}else {
					emberAfCorePrintln("SW2: 1 time");
					toggleLed(LED2, ledPink,3,300,300);
				}
			break;

			case press_2:
				if(button == SW_1){
					emberAfCorePrintln("SW1: 2 times");
					turnOnLed(LED1,ledGreen);
				}else {
					emberAfCorePrintln("SW2: 2 time");
					toggleLed(LED2, ledyellow,4,500,500);
				}
				break;

			case press_3:
				if(button == SW_1){
					emberAfCorePrintln("SW1: 3 time");
					turnOnLed(LED1,ledBlue);
				}else {
					emberAfCorePrintln("SW2: 3 time");
				}
				break;

			case press_4:
				if(button == SW_1){
					emberAfCorePrintln("SW1: 4 time");
				}else {
					emberAfCorePrintln("SW2: 4 time");
				}
				break;

			case press_5:
				if(button == SW_1){
					emberAfCorePrintln("SW1: 5 time");
				}else {
					emberAfCorePrintln("SW2: 5 time");
				}
				break;

			default:
				break;
		}
}

/*
 * @func	Main_ButtonHoldCallbackHandler
 * @brief	Event Button Handler
 * @param	button, holdingHandler
 * @retval	None
 */
void Main_ButtonHoldCallbackHandler(uint8_t button, BUTTON_Event_t holdingHandler)
{
//	emberAfCorePrintln("SW %d HOLDING %d s\n",button+1,holdingHandler-press_max);
	switch(holdingHandler)
	{
		case hold_1s:
			emberAfCorePrintln("SW1: 1 s");
			break;

		case hold_2s:
			emberAfCorePrintln("SW1: 2 s");
			break;

		case hold_3s:
			emberAfCorePrintln("SW1: 3 s");
			break;

		case hold_4s:
			emberAfCorePrintln("SW1: 4 s");
			break;

		case hold_5s:
			emberAfCorePrintln("SW1: 5 s");
			break;

		default:
			break;
	}
}

