
/**
   @file wiscore_sounds.h
   @author dhinojosac
   @brief utils sounds for wiscore using RAK18001 buzzer bassed on https://github.com/RAKWireless/WisBlock/tree/master/examples/RAK4630/sensors/RAK18001_Buzzer
   @version 0.1
   @date 04-06-2021
**/
#ifndef __WISCORE_SOUNS_H__
#define __WISCORE_SOUNS_H__

#include <Arduino.h>

#define SLOT_A 17
#define SLOT_B 34
#define SLOT_C 21
#define SLOT_D 9

//This part is the note and rhythm of the song
#define NTC0 -1
#define NTC1 262
#define NTC2 294
#define NTC3 330
#define NTC4 350
#define NTC5 393
#define NTC6 441
#define NTC7 495

#define NTCL1 131
#define NTCL2 147
#define NTCL3 165
#define NTCL4 175
#define NTCL5 196
#define NTCL6 221
#define NTCL7 248

#define NTCH1 525
#define NTCH2 589
#define NTCH3 661
#define NTCH4 700
#define NTCH5 786
#define NTCH6 882
#define NTCH7 990

#define WHOLE 1
#define HALF 0.5
#define QUARTER 0.25
#define EIGHTH 0.25
#define SIXTEENTH 0.625

void initSounds(int);
void soundSuccess(void);
void soundError(void);
void soundAlarm(void);

#endif //__WISCORE_SOUNS_H__
