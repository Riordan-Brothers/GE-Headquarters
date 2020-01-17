#ifndef __S2_PHOTOCELL_PROPORTIONAL_CONTROL_V1_7_H__
#define __S2_PHOTOCELL_PROPORTIONAL_CONTROL_V1_7_H__



/*
* STRUCTURE S2_Photocell_Proportional_Control_v1_7__AUTOLEVEL
*/
START_STRUCTURE_DEFINITION( S2_Photocell_Proportional_Control_v1_7, AUTOLEVEL )
{
   unsigned short AUTOLEVEL__AUTO_X;
   unsigned short AUTOLEVEL__AUTO_Y;
   unsigned short AUTOLEVEL__SENSITIVITY_LEVEL;
   unsigned short AUTOLEVEL__NIGHTTIME_SETPOINT;
   unsigned short AUTOLEVEL__ENABLED;
   unsigned short AUTOLEVEL__DIMLEVELMINCHANGE;
   unsigned long AUTOLEVEL__RESPONSE_TIME;
   unsigned long AUTOLEVEL__SLOPEVALUE;
   unsigned long AUTOLEVEL__YINTERCEPT;
   long AUTOLEVEL__NIGHTTIME_DIM_LEVEL;
   long AUTOLEVEL__MINDIMLEVEL;
   long AUTOLEVEL__OFFSET;
};


/*
* Constructor and Destructor
*/
int S2_Photocell_Proportional_Control_v1_7_AUTOLEVEL_Constructor ( START_STRUCTURE_DEFINITION( S2_Photocell_Proportional_Control_v1_7, AUTOLEVEL ) * me, int nVerbose );
int S2_Photocell_Proportional_Control_v1_7_AUTOLEVEL_Destructor ( START_STRUCTURE_DEFINITION( S2_Photocell_Proportional_Control_v1_7, AUTOLEVEL ) * me, int nVerbose );

/*
* DIGITAL_INPUT
*/
#define __S2_Photocell_Proportional_Control_v1_7_DISABLE_DIG_INPUT 0
#define __S2_Photocell_Proportional_Control_v1_7_DISABLEANDOFF_DIG_INPUT 1
#define __S2_Photocell_Proportional_Control_v1_7_RESTART_PHOTOCELL_DIG_INPUT 2
#define __S2_Photocell_Proportional_Control_v1_7_RESTARTPHOTOCELLWITHRESPONSETIME_DIG_INPUT 3
#define __S2_Photocell_Proportional_Control_v1_7_CALIBRATE_NIGHT_DIG_INPUT 4
#define __S2_Photocell_Proportional_Control_v1_7_FASTER_RESPONSE_DIG_INPUT 5
#define __S2_Photocell_Proportional_Control_v1_7_SLOWER_RESPONSE_DIG_INPUT 6
#define __S2_Photocell_Proportional_Control_v1_7_DIMLEVELMINCHANGED_DIG_INPUT 7
#define __S2_Photocell_Proportional_Control_v1_7_MIN_DIM_LEVEL_CHANGED_DIG_INPUT 8
#define __S2_Photocell_Proportional_Control_v1_7_TEMPRAISE_DIG_INPUT 9
#define __S2_Photocell_Proportional_Control_v1_7_TEMPLOWER_DIG_INPUT 10


/*
* ANALOG_INPUT
*/
#define __S2_Photocell_Proportional_Control_v1_7_SENSITIVITYLEVEL_ANALOG_INPUT 0
#define __S2_Photocell_Proportional_Control_v1_7_SENSOR_INPUT_ANALOG_INPUT 1




/*
* DIGITAL_OUTPUT
*/
#define __S2_Photocell_Proportional_Control_v1_7_DISABLED_DIG_OUTPUT 0
#define __S2_Photocell_Proportional_Control_v1_7_SEND_RAMP_1_DIG_OUTPUT 1
#define __S2_Photocell_Proportional_Control_v1_7_SEND_RAMP_2_DIG_OUTPUT 2
#define __S2_Photocell_Proportional_Control_v1_7_DALI_OFF_DIG_OUTPUT 3


/*
* ANALOG_OUTPUT
*/
#define __S2_Photocell_Proportional_Control_v1_7_DIM_LEVEL_OUT_ANALOG_OUTPUT 0
#define __S2_Photocell_Proportional_Control_v1_7_TARGET_DIM_LEVEL_ANALOG_OUTPUT 1
#define __S2_Photocell_Proportional_Control_v1_7_DIM_FADE_TIME_ANALOG_OUTPUT 2
#define __S2_Photocell_Proportional_Control_v1_7_NIGHTTIME_SETPOINT_ANALOG_OUTPUT 3
#define __S2_Photocell_Proportional_Control_v1_7_NIGHTTIME_DIM_OUT_ANALOG_OUTPUT 4
#define __S2_Photocell_Proportional_Control_v1_7_RESPONSE_TIME_ANALOG_OUTPUT 5
#define __S2_Photocell_Proportional_Control_v1_7_SENSITIVITYLEVELOUT_ANALOG_OUTPUT 6
#define __S2_Photocell_Proportional_Control_v1_7_MIN_DIM_LEVEL_OUT_ANALOG_OUTPUT 7
#define __S2_Photocell_Proportional_Control_v1_7_DIMOUTPUTMINCHANGE_ANALOG_OUTPUT 8



/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
#define __S2_Photocell_Proportional_Control_v1_7_RESTART_RAMP_TIME_INTEGER_PARAMETER 10
#define __S2_Photocell_Proportional_Control_v1_7_NIGHTTIME_SETPOINT_DEFAULT_INTEGER_PARAMETER 11
#define __S2_Photocell_Proportional_Control_v1_7_OFFFADETIME_INTEGER_PARAMETER 12
#define __S2_Photocell_Proportional_Control_v1_7_ID_INTEGER_PARAMETER 14
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/
#define __S2_Photocell_Proportional_Control_v1_7_FILELOCATION_STRING_PARAMETER 13
#define __S2_Photocell_Proportional_Control_v1_7_FILELOCATION_PARAM_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Photocell_Proportional_Control_v1_7, __FILELOCATION, __S2_Photocell_Proportional_Control_v1_7_FILELOCATION_PARAM_MAX_LEN );


/*
* INTEGER
*/


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/
#define __S2_Photocell_Proportional_Control_v1_7_G_FILEPATH_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Photocell_Proportional_Control_v1_7, __G_FILEPATH, __S2_Photocell_Proportional_Control_v1_7_G_FILEPATH_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Photocell_Proportional_Control_v1_7 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __G_OUTPUTVALUE;
   unsigned short __G_SEMAPHORE;
   unsigned short __G_SENDRAMPSEMAPHORE;
   unsigned short __G_BSENSORINPUTSEMAPHORE;
   unsigned short __G_INITIALIZED;
   unsigned short __G_BDISABLESENSOR;
   unsigned short __G_IFILEHANDLE;
   long __G_PREVIOUSTARGET;
   long __G_LOFFSET;
   DECLARE_STRING_STRUCT( S2_Photocell_Proportional_Control_v1_7, __G_FILEPATH );
   DECLARE_STRUCT( S2_Photocell_Proportional_Control_v1_7, AUTOLEVEL, __AUTOSETPOINTDATA );
   DECLARE_STRING_STRUCT( S2_Photocell_Proportional_Control_v1_7, __FILELOCATION );
};

START_NVRAM_VAR_STRUCT( S2_Photocell_Proportional_Control_v1_7 )
{
};

DEFINE_WAITEVENT( S2_Photocell_Proportional_Control_v1_7, SAVEWAIT );


#endif //__S2_PHOTOCELL_PROPORTIONAL_CONTROL_V1_7_H__

