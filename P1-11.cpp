#include  <stdio.h>
#include  <math.h>

void  main()
{
       double  a, b, c;
       double  s, area;
       
       printf( "Input a,b,c :" );
       scanf( "%lf%lf%lf",  &a, &b, &c );
       
       s = a + b + c;
       area = sqrt( ( (s-a)+(s-b)+(s-c) ) /
                             ( (s-a)*(s-b)*(s-c)) ); //?                                   
       
       printf( "area = %lf", area );
}
