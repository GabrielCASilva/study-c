#include <stdio.h>

int main(void)
{
  float premio = 780000.00;
  float primeiroLugar = premio * .46;
  float segundoLugar = premio * .32;
  float terceiroLugar = premio - (primeiroLugar + segundoLugar);

  printf("primeiro: %.2f\nsegundo: %.2f\nterceiro: %.2f", primeiroLugar, segundoLugar, terceiroLugar);
  return 0;
}