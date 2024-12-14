#include "USART.h"
#include "pinDefines.h"
#include <avr/io.h>
#include <util/delay.h>
int main(void) {
  char serialCharacter;
  // -------- Inits --------- //
  // LED_DDR = 0xff;
  initUSART();
  printString("Hello World!\r\n");
  /* set up LEDs for output */
  /* to test */
  // ------ Event loop ------ //
  while (1) {
    serialCharacter = receiveByte();
    transmitByte(serialCharacter);
    // LED_PORT = serialCharacter;
    /* display ascii/numeric value of character */
  }
  return (0);
  /* End event loop */
}
