#ifndef _ROT_CONFIG_H
#define _ROT_CONFIG_H

#define ROT_MOTOR STEPPER_MOT

#define STEPPER_MOT 1
#define DC_MOT      2

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

#else

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

#define DEFAULT_HOME_STATE HIGH /*Change to LOW according to Home sensor*/


#endif
