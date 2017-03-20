#ifndef _ROT_CONFIG_H
#define _ROT_CONFIG_H

#define STEPPER_MOT 1
#define DC_MOT      2

/*User selectable, depends on user's rotator configuration.
 *Possible values: 'STEPPER_MOT' || 'DC_MOT'
 *Default: STEPPER_MOT
 */
#define ROT_MOTOR STEPPER_MOT

#if ROT_MOTOR == DC_MOT
/*Mandatory*/
#define ENCODERS 1
#else
/*Uncomment this if your configuration is STEPPER_MOT with encoders*/
/*#define ENCODERS 1*/
#endif

/*MOTORS CONFIGURATION BEGINS HERE*/
#if ROT_MOTOR == STEPPER_MOT

#define DIR_AZ 6 /*PIN for Azimuth Direction*/
#define STEP_AZ 5 /*PIN for Azimuth Steps*/
#define DIR_EL 10 /*PIN for Elevation Direction*/
#define STEP_EL 9 /*PIN for Elevation Steps*/

#define SPR 200 /*Step Per Revolution*/

#define MIN_PULSE_WIDTH 20 /*in microsecond*/

/*TODO to be revised-corrected*/
#define HOME_DELAY 6000 /*Time for homing Decceleration in millisecond*/

#else /*DC MOTOR CONFIGURATION*/

/* H-bridge defines */
#define PWM1M1 5
#define PWM2M1 6
#define PWM1M2 9
#define PWM2M2 10

/*TODO rename parameters*/
/* Limits for control signals from the PID controller */
#define outMax 120
#define outMin 35
#define Deadband 1

#endif

/*GENERAL CONFIGURATION PARAMETERS GOES HERE*/
#define EN 8 /*PIN for Enable or Disable Stepper Motors*/

#define RATIO 54 /*Gear ratio*/
#define T_DELAY 60000 /*Time to disable the motors in millisecond*/

#define HOME_AZ 4 /*Homing switch for Azimuth*/
#define HOME_EL 3 /*Homing switch for Elevation*/

#define MAX_AZ_ANGLE 365 /*Maximum Angle of Azimuth for homing scanning*/
#define MAX_EL_ANGLE 365 /*Maximum Angle of Elevation for homing scanning*/

#define MAX_SPEED 300
#define MAX_ACCELERATION 100

#define BufferSize 256 /*Serial input global buffer*/
#define BaudRate 19200 /*As proposed from easycomm protocol*/

/* Change to LOW according to Home sensor */
#define DEFAULT_HOME_STATE 1

#ifdef ENCODERS
/* Ratio of axis_gear/encoder's_gear*/
#define RATIO 2
/* Encoder defines */
#define sda_pin 16
#define scl_pin 14
#define as5601_adr 0x36
#define raw_ang_high 0x0c
#define raw_ang_low 0x0d
#define status_reg 0x0b

#endif

/* Maximum Angle for homing scanning */
#define SEEK_MOVE 30
#define MIN_AZ_ANGLE 0
#define MAX_AZ_ANGLE 370
#define MIN_EL_ANGLE 0
#define MAX_EL_ANGLE 110

#endif
