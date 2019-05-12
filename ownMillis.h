#ifndef ownMillis_h
#define ownMillis_h


#include <avr\io.h>
#include <avr/interrupt.h>
#define overFlowCount 0xfa 
#endif

unsigned long GetMillis();
unsigned long GetSec();
void initMillis();
