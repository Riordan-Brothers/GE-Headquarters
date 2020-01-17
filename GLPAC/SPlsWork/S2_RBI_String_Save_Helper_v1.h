#ifndef __S2_RBI_STRING_SAVE_HELPER_V1_H__
#define __S2_RBI_STRING_SAVE_HELPER_V1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/



#define __S2_RBI_String_Save_Helper_v1_STR_STRING_INPUT 0
#define __S2_RBI_String_Save_Helper_v1_STR_ARRAY_NUM_ELEMS 255
#define __S2_RBI_String_Save_Helper_v1_STR_ARRAY_NUM_CHARS 50
CREATE_STRING_ARRAY( S2_RBI_String_Save_Helper_v1, __STR, __S2_RBI_String_Save_Helper_v1_STR_ARRAY_NUM_ELEMS, __S2_RBI_String_Save_Helper_v1_STR_ARRAY_NUM_CHARS );

/*
* DIGITAL_OUTPUT
*/
#define __S2_RBI_String_Save_Helper_v1_SAVE_PULSE_DIG_OUTPUT 0


/*
* ANALOG_OUTPUT
*/



/*
* Direct Socket Variables
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

START_GLOBAL_VAR_STRUCT( S2_RBI_String_Save_Helper_v1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_ARRAY( S2_RBI_String_Save_Helper_v1, __STR );
};

START_NVRAM_VAR_STRUCT( S2_RBI_String_Save_Helper_v1 )
{
};



#endif //__S2_RBI_STRING_SAVE_HELPER_V1_H__

