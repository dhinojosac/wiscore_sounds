# WISCORE SOUNDS

Utils sounds library for wiscore4631 of RAKwireless (WisBLOCK) using RAK18001 buzzer.

## Usage

Initializes the library by passing the SLOT used for RAK18001 buzzer.

```c
initSounds(SLOT_B);
```

Then you can use the function you want from those already defined.

```c
soundSuccess();

  delay(1200);

  soundError();

  delay(1200);

  soundAlarm();
```

### Author

Diego Hinojosa Córdova
