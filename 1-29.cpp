#include <stdio.h>
#include <stdlib.h>

void main()
{
	//int c;
	unsigned char c;
	for(c=0x21;c<0xff;c++)
		printf("%c=%x=%d\t",c,c,c);
}
