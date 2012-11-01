/*************************************************************************//**
 * @file 	motor.h
 * @brief	xx
 * @author	Nicolas BOUTIN
 * @date	01/11/2012
 * @module	xx
 *****************************************************************************/
#ifndef __MOTOR__
#define __MOTOR__

/*****************************************************************************
 * INCLUDE
 *****************************************************************************/
#include <Arduino.h>

/*****************************************************************************
 * DEFINITION
 *****************************************************************************/
#define R_FORWARD LOW
#define R_BACKWARD HIGH
#define L_FORWARD HIGH
#define L_BACKWARD LOW

/*****************************************************************************
 * CLASS
 *****************************************************************************/
/**
 * @class 	xx
 * @brief	xx
 * @author	boutboutnico
 * @date	25 juil. 2012
 */
class Motor
{
private:
	uint8_t ui8_dir_pin;
	uint8_t ui8_cmd_pin;

	boolean b_dir;
	uint8_t ui8_cmd;

public:
	Motor(uint8_t i_ui8_dir_pin, uint8_t i_ui8_cmd_pin, boolean i_b_dir, uint8_t i_ui8_cmd);

	void begin();
	void command(uint8_t i_ui8_command);
};

#endif //__MOTOR__
/*****************************************************************************
 * END OF FILE
 *****************************************************************************/
