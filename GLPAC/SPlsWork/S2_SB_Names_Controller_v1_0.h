#ifndef __S2_SB_NAMES_CONTROLLER_V1_0_H__
#define __S2_SB_NAMES_CONTROLLER_V1_0_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_SB_Names_Controller_v1_0_UPDATE_DIG_INPUT 0
#define __S2_SB_Names_Controller_v1_0_COMMIT_DIG_INPUT 1


/*
* ANALOG_INPUT
*/
#define __S2_SB_Names_Controller_v1_0_NEW_GROUP_COUNT_ANALOG_INPUT 0

#define __S2_SB_Names_Controller_v1_0_NEW_ROOM_NAME$_STRING_INPUT 1
#define __S2_SB_Names_Controller_v1_0_NEW_ROOM_NAME$_STRING_MAX_LEN 32
CREATE_STRING_STRUCT( S2_SB_Names_Controller_v1_0, __NEW_ROOM_NAME$, __S2_SB_Names_Controller_v1_0_NEW_ROOM_NAME$_STRING_MAX_LEN );


#define __S2_SB_Names_Controller_v1_0_NEW_GROUP_NAME$_STRING_INPUT 2
#define __S2_SB_Names_Controller_v1_0_NEW_GROUP_NAME$_ARRAY_NUM_ELEMS 16
#define __S2_SB_Names_Controller_v1_0_NEW_GROUP_NAME$_ARRAY_NUM_CHARS 32
CREATE_STRING_ARRAY( S2_SB_Names_Controller_v1_0, __NEW_GROUP_NAME$, __S2_SB_Names_Controller_v1_0_NEW_GROUP_NAME$_ARRAY_NUM_ELEMS, __S2_SB_Names_Controller_v1_0_NEW_GROUP_NAME$_ARRAY_NUM_CHARS );

/*
* DIGITAL_OUTPUT
*/
#define __S2_SB_Names_Controller_v1_0_FILE_ACCESS_BUSY_DIG_OUTPUT 0


/*
* ANALOG_OUTPUT
*/
#define __S2_SB_Names_Controller_v1_0_NUMBER_OF_GROUPS_ANALOG_OUTPUT 0

#define __S2_SB_Names_Controller_v1_0_ROOM_NAME$_STRING_OUTPUT 1

#define __S2_SB_Names_Controller_v1_0_GROUP_NAME$_STRING_OUTPUT 2
#define __S2_SB_Names_Controller_v1_0_GROUP_NAME$_ARRAY_LENGTH 16

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
#define __S2_SB_Names_Controller_v1_0_TAGSTART_STRING_MAX_LEN 32
CREATE_STRING_STRUCT( S2_SB_Names_Controller_v1_0, __TAGSTART, __S2_SB_Names_Controller_v1_0_TAGSTART_STRING_MAX_LEN );
#define __S2_SB_Names_Controller_v1_0_TAGSTOP_STRING_MAX_LEN 32
CREATE_STRING_STRUCT( S2_SB_Names_Controller_v1_0, __TAGSTOP, __S2_SB_Names_Controller_v1_0_TAGSTOP_STRING_MAX_LEN );
#define __S2_SB_Names_Controller_v1_0_TEMPDATA$_STRING_MAX_LEN 4096
CREATE_STRING_STRUCT( S2_SB_Names_Controller_v1_0, __TEMPDATA$, __S2_SB_Names_Controller_v1_0_TEMPDATA$_STRING_MAX_LEN );
#define __S2_SB_Names_Controller_v1_0_ROOMNAME$_STRING_MAX_LEN 32
CREATE_STRING_STRUCT( S2_SB_Names_Controller_v1_0, __ROOMNAME$, __S2_SB_Names_Controller_v1_0_ROOMNAME$_STRING_MAX_LEN );
#define __S2_SB_Names_Controller_v1_0_XML_DATA$_STRING_MAX_LEN 8192
CREATE_STRING_STRUCT( S2_SB_Names_Controller_v1_0, __XML_DATA$, __S2_SB_Names_Controller_v1_0_XML_DATA$_STRING_MAX_LEN );
#define __S2_SB_Names_Controller_v1_0_GROUPNAME$_ARRAY_NUM_ELEMS 16
#define __S2_SB_Names_Controller_v1_0_GROUPNAME$_ARRAY_NUM_CHARS 32
CREATE_STRING_ARRAY( S2_SB_Names_Controller_v1_0, __GROUPNAME$, __S2_SB_Names_Controller_v1_0_GROUPNAME$_ARRAY_NUM_ELEMS, __S2_SB_Names_Controller_v1_0_GROUPNAME$_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_SB_Names_Controller_v1_0 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __GROUP_NAME$ );
   unsigned short __STARTPOSITION;
   unsigned short __STOPPOSITION;
   unsigned short __STATUS;
   unsigned short __DATALENGTH;
   unsigned short __USERS_DEFINED;
   unsigned short __GROUPCOUNT;
   short __FILEHANDLE;
   short __TOTALBYTESWRITTEN;
   DECLARE_STRING_STRUCT( S2_SB_Names_Controller_v1_0, __TAGSTART );
   DECLARE_STRING_STRUCT( S2_SB_Names_Controller_v1_0, __TAGSTOP );
   DECLARE_STRING_STRUCT( S2_SB_Names_Controller_v1_0, __TEMPDATA$ );
   DECLARE_STRING_STRUCT( S2_SB_Names_Controller_v1_0, __ROOMNAME$ );
   DECLARE_STRING_STRUCT( S2_SB_Names_Controller_v1_0, __XML_DATA$ );
   DECLARE_STRING_ARRAY( S2_SB_Names_Controller_v1_0, __GROUPNAME$ );
   DECLARE_STRING_STRUCT( S2_SB_Names_Controller_v1_0, __NEW_ROOM_NAME$ );
   DECLARE_STRING_ARRAY( S2_SB_Names_Controller_v1_0, __NEW_GROUP_NAME$ );
};

START_NVRAM_VAR_STRUCT( S2_SB_Names_Controller_v1_0 )
{
};



#endif //__S2_SB_NAMES_CONTROLLER_V1_0_H__

