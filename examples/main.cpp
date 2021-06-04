
#include <Arduino.h>
#include <wiscore_sounds.h>

void setup()
{
  initSounds(SLOT_B);

  soundSuccess();

  delay(1200);

  soundError();

  delay(1200);

  soundAlarm();
}
void loop()
{
}
