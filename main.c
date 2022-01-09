#include </usr/share/sdcc/include/mcs51/8051.h>
#include "tool.h"


void main(void){
		while(1){
				P1_0 = 1;
				delay();
				P1_0 = 0;
				delay();
		}
}
