#ifndef __S2_RBI_MOTION_LOGIC_SPLUS_V1C_H__
#define __S2_RBI_MOTION_LOGIC_SPLUS_V1C_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_RBI_Motion_Logic_SPlus_v1c_SENSORIN_DIG_INPUT 0
#define __S2_RBI_Motion_Logic_SPlus_v1c_FORCEOCCUPANCY_DIG_INPUT 1
#define __S2_RBI_Motion_Logic_SPlus_v1c_FORCEVACANCY_DIG_INPUT 2


/*
* ANALOG_INPUT
*/
#define __S2_RBI_Motion_Logic_SPlus_v1c_TIMEOUTSECONDS_ANALOG_INPUT 0
#define __S2_RBI_Motion_Logic_SPlus_v1c_TIMEOUTTENTHS_ANALOG_INPUT 1
#define __S2_RBI_Motion_Logic_SPlus_v1c_OCCENABLEDISABLE_ANALOG_INPUT 2
#define __S2_RBI_Motion_Logic_SPlus_v1c_VACENABLEDISABLE_ANALOG_INPUT 3




/*
* DIGITAL_OUTPUT
*/
#define __S2_RBI_Motion_Logic_SPlus_v1c_OCCUPIEDHELD_DIG_OUTPUT 0
#define __S2_RBI_Motion_Logic_SPlus_v1c_OCCUPANCYENABLEFB_DIG_OUTPUT 1
#define __S2_RBI_Motion_Logic_SPlus_v1c_OCCUPANCYDISABLEFB_DIG_OUTPUT 2
#define __S2_RBI_Motion_Logic_SPlus_v1c_VACANCYENABLEFB_DIG_OUTPUT 3
#define __S2_RBI_Motion_Logic_SPlus_v1c_VACANCYDISABLEFB_DIG_OUTPUT 4
#define __S2_RBI_Motion_Logic_SPlus_v1c_OCCUPIEDP_DIG_OUTPUT 5
#define __S2_RBI_Motion_Logic_SPlus_v1c_VACANTP_DIG_OUTPUT 6


/*
* ANALOG_OUTPUT
*/
#define __S2_RBI_Motion_Logic_SPlus_v1c_TIMEOUTSECONDSFB_ANALOG_OUTPUT 0
#define __S2_RBI_Motion_Logic_SPlus_v1c_TIMEOUTTENTHSFB_ANALOG_OUTPUT 1



/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
#define __S2_RBI_Motion_Logic_SPlus_v1c_TIMEOUTTYPE_INTEGER_PARAMETER 10
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

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_RBI_Motion_Logic_SPlus_v1c )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __OCCSAVE;
   unsigned short __VACSAVE;
   unsigned short __PULSETIME;
   unsigned long __TRUETIMEOUT;
};

START_NVRAM_VAR_STRUCT( S2_RBI_Motion_Logic_SPlus_v1c )
{
};

DEFINE_WAITEVENT( S2_RBI_Motion_Logic_SPlus_v1c, VACWAIT );


#endif //__S2_RBI_MOTION_LOGIC_SPLUS_V1C_H__

