#include "REG51.h"
#include <intrins.h>

void delay(unsigned int xms){
	unsigned char i,j;
	for(i = xms;i > 0 ;i--){
		for(j = 1;j > 0;j--);
	}
}

void main(void)
{
	P2 = 0xFE;
	
	while(1){
		delay(300);
		P2 = _crol_(P2,1);
	} 
}