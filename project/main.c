#include <msp430.h>
#include "timerLib/libTimer.h"
#include "buzzer.h"
#include "led.h"
#include "switches.h"
#include <stdio.h>
#include <stdlib.h>

void main(void){
  configureClocks();
  switch_init();
  led_init();

  or_sr(0x18);
}
