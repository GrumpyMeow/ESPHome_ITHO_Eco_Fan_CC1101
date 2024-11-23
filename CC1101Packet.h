/*
 * Author: Klusjesman, modified bij supersjimmie for Arduino/ESP8266/ESP32
 */


// # include <stdint.h>  // Commented Added by Sander
// # include <stdio.h>   // Commented Added by Sander

#ifndef CC1101PACKET_H_
#define CC1101PACKET_H_

#include <stdio.h> // was commented by Sander 
#ifdef ESP8266     // was commented by Sander
 #include <Arduino.h>    // wascommented by Sander
#endif    // was commented by Sander

#define CC1101_BUFFER_LEN        64
#define CC1101_DATA_LEN          CC1101_BUFFER_LEN - 3


class CC1101Packet
{
	public:
		uint8_t length;
		uint8_t data[72];
};


#endif /* CC1101PACKET_H_ */
