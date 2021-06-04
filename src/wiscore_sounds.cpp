
/**
   @file wiscore_sounds.cpp
   @author dhinojosac
   @brief utils sounds for wiscore using RAK18001 buzzer
   @version 0.1
   @date 04-06-2021
**/
#include "wiscore_sounds.h"
int buzzer_control = SLOT_A; // default slot A

void initSounds(int bc)
{
  buzzer_control = bc;
  pinMode(buzzer_control, OUTPUT);
}

void soundSuccess(void)
{
  tone(buzzer_control, NTC3);
  delay(500 * HALF);
  noTone(buzzer_control);

  tone(buzzer_control, NTC4);
  delay(500 * HALF);
  noTone(buzzer_control);

  tone(buzzer_control, NTCH7);
  delay(500 * WHOLE);
  noTone(buzzer_control);
}

void soundError(void)
{
  tone(buzzer_control, NTCL5);
  delay(500 * HALF);
  noTone(buzzer_control);

  tone(buzzer_control, NTCL2);
  delay(500 * WHOLE);
  noTone(buzzer_control);
}

void soundAlarm(void)
{
  for (int x = 0; x < 3; x++)
  {
    tone(buzzer_control, NTCL5);
    delay(500 * HALF);
    noTone(buzzer_control);
    delay(500 * HALF);
  }
}
