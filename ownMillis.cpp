#include <ownMillis.h>

unsigned long mCount;
void initMillis(){
    TCNT0 = 6;
    TCCR0B = (1<<CS01)|(1<<CS00);
    TCCR0A = (1<<WGM01);
    OCR0A = overFlowCount;
    TIMSK0 = (1<<OCIE0A);
    sei();
}

unsigned long GetMillis(){
    return mCount;
}
unsigned long GetSec(){
    return mCount/1000;
}

ISR(TIMER0_COMPA_vect){
   mCount++;
   TCNT0 = 6;
}
