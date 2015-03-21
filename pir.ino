#define pir A0
#define led 13

void initPir()
{
  pinMode(pir, INPUT);
  pinMode(led, OUTPUT);
}

int getPirStatus()
{
  return digitalRead(pir);
}
