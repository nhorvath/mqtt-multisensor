/*********** Copy this file to local.h and fill in all values ***********/


/************ WIFI and MQTT INFORMATION (CHANGE THESE FOR YOUR SETUP) ******************/
#define wifi_ssid "" //type your WIFI information inside the quotes
#define wifi_password ""
#define mqtt_server ""
#define mqtt_user "" 
#define mqtt_password ""
#define mqtt_port 1883

/************* MQTT TOPICS (change these topics as you wish)  **************************/
#define light_state_topic "multisensor/node1"
#define light_set_topic "multisensor/node1/set"
#define debug_topic "multisensor/node1/debug"

/**************************** FOR OTA **************************************************/
#define SENSORNAME "node1"
#define OTApassword "" // change this to whatever password you want to use when you upload OTA


/* Uncomment the following line to enable the light sensor */
/*#define LDR_ENABLED */
