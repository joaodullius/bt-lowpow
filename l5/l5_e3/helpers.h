#ifndef HELPERS_H
#define HELPERS_H

#include <nrfx_timer.h>
#include <zephyr/drivers/gpio.h>
#include <hal/nrf_gpio.h>

#define PATTERN_SIZE 5000

extern uint16_t pattern[PATTERN_SIZE];

#endif /* HELPERS_H */