#include  <stdio.h>
#include <math.h>

void  main()
{
       double  a, b, c, d, d1;
       printf( "Input a,b,c :" );
       scanf( "%lf%lf%lf",  &a, &b, &c );
       d=b*b-(4*a*c);
	   d1=sqrt(d);
	   printf( "x1 = %lf, x2 = %lf", 
		(-b+d1)/(2*a), (-b-d1)/(2*a) );
}
