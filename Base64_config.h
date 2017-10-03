#ifndef _BASE64_CONFIG_H
#define _BASE64_CONFIG_H

#if defined(__ARDUINO_X86__) || (defined (__linux) || defined (linux))
  #undef PROGMEM
  #define PROGMEM __attribute__(( section(".progmem.data") ))
  #define pgm_read_byte(p) (*(p))
  typedef unsigned char byte;
  #define printf_P printf
#elif (defined(__AVR__))
  #include <avr\pgmspace.h>
#else
  #include <pgmspace.h>
#endif

#endif      // _BASE64_CONFIG_H
