#ifndef __S2_RBI_2_SERIES_SYSTEM_HELPER_SPLUS_V1B_H__
#define __S2_RBI_2_SERIES_SYSTEM_HELPER_SPLUS_V1B_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_SETTINGS_SAVE_DIG_INPUT 0
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_SETTINGS_RECALL_DIG_INPUT 1
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_AV_ENABLE_DIG_INPUT 2
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_AV_DISABLE_DIG_INPUT 3

#define __S2_RBI_2_Series_System_Helper_Splus_v1b_ZONE_ENABLE_DIG_INPUT 4
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_ZONE_ENABLE_ARRAY_LENGTH 12
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_ZONE_DISABLE_DIG_INPUT 16
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_ZONE_DISABLE_ARRAY_LENGTH 12
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_ZONE_DIMMABLE_DIG_INPUT 28
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_ZONE_DIMMABLE_ARRAY_LENGTH 12
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_ZONE_SWITCHED_DIG_INPUT 40
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_ZONE_SWITCHED_ARRAY_LENGTH 12
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_PC_ENABLE_DIG_INPUT 52
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_PC_ENABLE_ARRAY_LENGTH 12
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_PC_DISABLE_DIG_INPUT 64
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_PC_DISABLE_ARRAY_LENGTH 12

/*
* ANALOG_INPUT
*/
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_SYSTEM_PC_TYPE_SET_ANALOG_INPUT 0
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_MOTION_TYPE_SET_ANALOG_INPUT 1
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_MOTION_TIMEOUT_SET_ANALOG_INPUT 2



#define __S2_RBI_2_Series_System_Helper_Splus_v1b_ZONE_PC_STATUS_SET_ANALOG_INPUT 3
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_ZONE_PC_STATUS_SET_ARRAY_LENGTH 12

/*
* DIGITAL_OUTPUT
*/
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_SETTINGS_SAVED_FB_DIG_OUTPUT 0
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_SETTINGS_UPDATED_FB_DIG_OUTPUT 1
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_AV_ENABLE_FB_DIG_OUTPUT 2

#define __S2_RBI_2_Series_System_Helper_Splus_v1b_ZONE_ENABLE_FB_DIG_OUTPUT 3
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_ZONE_ENABLE_FB_ARRAY_LENGTH 12
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_ZONE_DIMMABLE_FB_DIG_OUTPUT 15
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_ZONE_DIMMABLE_FB_ARRAY_LENGTH 12
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_PC_ENABLE_FB_DIG_OUTPUT 27
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_PC_ENABLE_FB_ARRAY_LENGTH 12

/*
* ANALOG_OUTPUT
*/
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_SYSTEM_PC_TYPE_FB_ANALOG_OUTPUT 0
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_MOTION_TYPE_FB_ANALOG_OUTPUT 1
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_MOTION_TIMEOUT_FB_ANALOG_OUTPUT 2
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_KEYPAD_TYPE_FB_ANALOG_OUTPUT 3


#define __S2_RBI_2_Series_System_Helper_Splus_v1b_ZONE_PC_STATUS_FB_ANALOG_OUTPUT 4
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_ZONE_PC_STATUS_FB_ARRAY_LENGTH 12

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
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_HELPERID_STRING_PARAMETER 10
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_FILE_PATH_STRING_PARAMETER 11
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_HELPERID_PARAM_MAX_LEN 50
CREATE_STRING_STRUCT( S2_RBI_2_Series_System_Helper_Splus_v1b, __HELPERID, __S2_RBI_2_Series_System_Helper_Splus_v1b_HELPERID_PARAM_MAX_LEN );
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_FILE_PATH_PARAM_MAX_LEN 50
CREATE_STRING_STRUCT( S2_RBI_2_Series_System_Helper_Splus_v1b, __FILE_PATH, __S2_RBI_2_Series_System_Helper_Splus_v1b_FILE_PATH_PARAM_MAX_LEN );


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
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_SBUF_STRING_MAX_LEN 20000
CREATE_STRING_STRUCT( S2_RBI_2_Series_System_Helper_Splus_v1b, __SBUF, __S2_RBI_2_Series_System_Helper_Splus_v1b_SBUF_STRING_MAX_LEN );
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_FILE_CONTENTS_STRING_MAX_LEN 20000
CREATE_STRING_STRUCT( S2_RBI_2_Series_System_Helper_Splus_v1b, __FILE_CONTENTS, __S2_RBI_2_Series_System_Helper_Splus_v1b_FILE_CONTENTS_STRING_MAX_LEN );
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_FILE_LINE_STRING_MAX_LEN 256
CREATE_STRING_STRUCT( S2_RBI_2_Series_System_Helper_Splus_v1b, __FILE_LINE, __S2_RBI_2_Series_System_Helper_Splus_v1b_FILE_LINE_STRING_MAX_LEN );
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_STR_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_RBI_2_Series_System_Helper_Splus_v1b, __STR, __S2_RBI_2_Series_System_Helper_Splus_v1b_STR_STRING_MAX_LEN );
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_TAGSTART_STRING_MAX_LEN 32
CREATE_STRING_STRUCT( S2_RBI_2_Series_System_Helper_Splus_v1b, __TAGSTART, __S2_RBI_2_Series_System_Helper_Splus_v1b_TAGSTART_STRING_MAX_LEN );
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_TAGSTOP_STRING_MAX_LEN 32
CREATE_STRING_STRUCT( S2_RBI_2_Series_System_Helper_Splus_v1b, __TAGSTOP, __S2_RBI_2_Series_System_Helper_Splus_v1b_TAGSTOP_STRING_MAX_LEN );
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_TEMPSTRING$_STRING_MAX_LEN 256
CREATE_STRING_STRUCT( S2_RBI_2_Series_System_Helper_Splus_v1b, __TEMPSTRING$, __S2_RBI_2_Series_System_Helper_Splus_v1b_TEMPSTRING$_STRING_MAX_LEN );
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_TEMPDATA$_STRING_MAX_LEN 4096
CREATE_STRING_STRUCT( S2_RBI_2_Series_System_Helper_Splus_v1b, __TEMPDATA$, __S2_RBI_2_Series_System_Helper_Splus_v1b_TEMPDATA$_STRING_MAX_LEN );
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_TEMPTAG_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_RBI_2_Series_System_Helper_Splus_v1b, __TEMPTAG, __S2_RBI_2_Series_System_Helper_Splus_v1b_TEMPTAG_STRING_MAX_LEN );
#define __S2_RBI_2_Series_System_Helper_Splus_v1b_TEMPTAGCONTENTS_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_RBI_2_Series_System_Helper_Splus_v1b, __TEMPTAGCONTENTS, __S2_RBI_2_Series_System_Helper_Splus_v1b_TEMPTAGCONTENTS_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_RBI_2_Series_System_Helper_Splus_v1b )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __ZONE_ENABLE );
   DECLARE_IO_ARRAY( __ZONE_DISABLE );
   DECLARE_IO_ARRAY( __ZONE_DIMMABLE );
   DECLARE_IO_ARRAY( __ZONE_SWITCHED );
   DECLARE_IO_ARRAY( __PC_ENABLE );
   DECLARE_IO_ARRAY( __PC_DISABLE );
   DECLARE_IO_ARRAY( __ZONE_ENABLE_FB );
   DECLARE_IO_ARRAY( __ZONE_DIMMABLE_FB );
   DECLARE_IO_ARRAY( __PC_ENABLE_FB );
   DECLARE_IO_ARRAY( __ZONE_PC_STATUS_SET );
   DECLARE_IO_ARRAY( __ZONE_PC_STATUS_FB );
   unsigned short __THREE_SERIES;
   unsigned short __STARTPOSITION;
   unsigned short __STOPPOSITION;
   unsigned short __ALLOWDATA;
   unsigned short __SAVEWAITTIME;
   unsigned short __SAVEWAITACTIVE;
   short __NFILEHANDLE;
   short __NFILEFOUND;
   short __IERRORCODE;
   DECLARE_STRING_STRUCT( S2_RBI_2_Series_System_Helper_Splus_v1b, __SBUF );
   DECLARE_STRING_STRUCT( S2_RBI_2_Series_System_Helper_Splus_v1b, __FILE_CONTENTS );
   DECLARE_STRING_STRUCT( S2_RBI_2_Series_System_Helper_Splus_v1b, __FILE_LINE );
   DECLARE_STRING_STRUCT( S2_RBI_2_Series_System_Helper_Splus_v1b, __STR );
   DECLARE_STRING_STRUCT( S2_RBI_2_Series_System_Helper_Splus_v1b, __TAGSTART );
   DECLARE_STRING_STRUCT( S2_RBI_2_Series_System_Helper_Splus_v1b, __TAGSTOP );
   DECLARE_STRING_STRUCT( S2_RBI_2_Series_System_Helper_Splus_v1b, __TEMPSTRING$ );
   DECLARE_STRING_STRUCT( S2_RBI_2_Series_System_Helper_Splus_v1b, __TEMPDATA$ );
   DECLARE_STRING_STRUCT( S2_RBI_2_Series_System_Helper_Splus_v1b, __TEMPTAG );
   DECLARE_STRING_STRUCT( S2_RBI_2_Series_System_Helper_Splus_v1b, __TEMPTAGCONTENTS );
   struct FileInfo_s __NFILEINFO;
   DECLARE_STRING_STRUCT( S2_RBI_2_Series_System_Helper_Splus_v1b, __HELPERID );
   DECLARE_STRING_STRUCT( S2_RBI_2_Series_System_Helper_Splus_v1b, __FILE_PATH );
};

START_NVRAM_VAR_STRUCT( S2_RBI_2_Series_System_Helper_Splus_v1b )
{
};

DEFINE_WAITEVENT( S2_RBI_2_Series_System_Helper_Splus_v1b, SAVEWAIT );


#endif //__S2_RBI_2_SERIES_SYSTEM_HELPER_SPLUS_V1B_H__

