#include <stdint.h>
#include <stdbool.h>

#include "efm32gg.h"
#include "ex2.h"
#include "g2lib.h"


/* function to set up GPIO mode and interrupts */
void setupGPIO()
{
	/* TODO set input and output pins for the joystick */

	/*
	 * Example of HW access from C code: turn on joystick LEDs D4-D8
	 * check efm32gg.h for other useful register definitions
	 */

	NVIC_IRQenable(IRQ_GPIO_EVEN, true);
	NVIC_IRQenable(IRQ_GPIO_ODD, true);
	CMU_periClockEnable(CMU_GPIO, true);
	GPIO_IRQsetupRange(GPIO_portC, 0, 7, true, true, true);

	GPIO_portSetupRange(GPIO_portA, 8, 15, GPIO_PUSHPULLDRIVE);
	GPIO_driveStrength(GPIO_portA, GPIO_HIGH);
	*GPIO_PA_DOUT = 0xFEFEFEFE;

	GPIO_portSetupRange(GPIO_portC, 0, 7, GPIO_INPUTPULLFILTER);
	*GPIO_PC_DOUT = 0xFF;

}


#define CLOCK_PERIOD_44KHZ 317

/* function to setup the timer */
void setupTimer(uint16_t period)
{
	NVIC_IRQenable(IRQ_TIMER1, true);
	CMU_periClockEnable(CMU_TIMER1, true);

	*TIMER1_TOP = CLOCK_PERIOD_44KHZ;
	*TIMER1_IEN = 1;
	*TIMER1_CMD = 1;
}


void setupDAC()
{
	/*
	 * TODO enable and set up the Digital-Analog Converter
	 *
	 * 1. Enable the DAC clock by setting bit 17 in CMU_HFPERCLKEN0
	 * 2. Prescale DAC clock by writing 0x50010 to DAC0_CTRL
	 * 3. Enable left and right audio channels by writing 1 to DAC0_CH0CTRL and DAC0_CH1CTRL
	 * 4. Write a continuous stream of samples to the DAC data registers, DAC0_CH0DATA and DAC0_CH1DATA, for example from a timer interrupt
	 * */

	CMU_periClockEnable(CMU_DAC0, true);

	*DAC0_CTRL = 0x50010;
	*DAC0_CH0CTRL = 1;
	*DAC0_CH1CTRL = 1;
}





