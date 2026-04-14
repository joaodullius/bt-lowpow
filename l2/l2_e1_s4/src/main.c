#include <zephyr/kernel.h>
#include <zephyr/sys/poweroff.h>
#include <zephyr/drivers/timer/system_timer.h>
int main(void)
{
	//Turn off GRTC and LF clock:
	sys_clock_disable();

	//Turn off RAM sections for CRACKEN and ICACHE:
	NRF_MEMCONF->POWER[1].RET &= ~0xE;

	//Enter system OFF:
	sys_poweroff();
	return 0;
}
