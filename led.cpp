#include<16f877A.h>
#include <iostream>
#include <string.h>
#include<dos.h>
#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#fuses HS,NOWDT,PUT,NOBROWNOUT,NOLVP,NOWRT,NOPROTECT,NOCPD
#use delay(clock=20000000) //Base de tiempo para retardos (frecuencia del Xtal)

//direcciones de los puertos y algunos registros
#byte OPTION= 0x81
#byte TMR0  = 0x01
#byte PORTA = 0x05
#byte PORTB = 0x06
#byte PORTC = 0x07
#byte PORTD = 0x08
#byte PORTE = 0x09

using namespace std;

void main(void) {
while(true)
{
PB7=1;
delay_ms(2000);
PB7=0;
delay_ms(2000);
}
}
