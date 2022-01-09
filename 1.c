#include "/usr/share/sdcc/include/mcs51/8051.h"

void delay(unsigned int t){
		unsigned int a,b;
		for (a=t;a>0;a--)
				for(b=100;b>0;b--);
}

void main()
{
	while(1)
	{
			P0_0= 0;
			delay(1000);
			P0_0 = 1;
			delay(1000);
		}
}
