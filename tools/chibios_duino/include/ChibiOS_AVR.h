/**
 * \file
 * \brief ChibiOS for AVR Arduinos
 */
#ifndef ChibiOS_AVR_h
#define ChibiOS_AVR_h

#ifndef __AVR__
#error avr based board required
#else  // __AVR__
#include <ch.h>
#include <hal.h>
#endif  // __AVR__

#if !defined(ARDUINO) || ARDUINO < 100
#error Arduino 1.0 or greater required
#endif  // ARDUINO

#ifdef __cplusplus
extern "C"{
#endif  //  __cplusplus
//------------------------------------------------------------------------------
/** ChibiOS_AVR version YYYYMMDD */
#define CHIBIOS_AVR_VERSION 20130710
//------------------------------------------------------------------------------
void chBegin(void (*mainThread)());
size_t chHeapMainSize();
size_t chUnusedHeapMain();
size_t chUnusedStack(void *wsp, size_t size);
#ifdef __cplusplus
} // extern "C"
#endif  // __cplusplus
#endif  // ChibiOS_AVR_h
