#ifndef ownMillis_h
#define ownMillis_h


#include <avr\io.h>
#include <avr/interrupt.h>
#define overFlowCount 249 
#endif

unsigned long GetMillis();
unsigned long GetSec();
void initMillis();
