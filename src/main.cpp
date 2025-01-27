#include <Arduino.h>

#define BUZZER_PIN 5
#define BUZZER_CHANNEL 3

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  // pinMode(BUZZER_PIN, OUTPUT);
  ledcAttachPin(BUZZER_PIN, BUZZER_CHANNEL);
}

void loop()
{
  ledcWriteNote(BUZZER_CHANNEL, NOTE_C, 4);
  delay(500);
  ledcWriteNote(BUZZER_CHANNEL, NOTE_D, 4);
  delay(500);
  ledcWriteNote(BUZZER_CHANNEL, NOTE_E, 4);
  delay(500);
  ledcWriteNote(BUZZER_CHANNEL, NOTE_F, 4);
  delay(500);
  ledcWriteNote(BUZZER_CHANNEL, NOTE_G, 4);
  delay(500);
  ledcWriteNote(BUZZER_CHANNEL, NOTE_A, 4);
  delay(500);
  ledcWriteNote(BUZZER_CHANNEL, NOTE_B, 4);
  delay(500);
}
