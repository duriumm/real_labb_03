#ifndef _TIMER_H_
#define _TIMER_H_

uint8_t simple_ramp();

void complete_timer_init(void);

void disable_OCR0A(void);

void enable_OCR0A(void);

#endif // _TIMER_H_
