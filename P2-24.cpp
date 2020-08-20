#include <stdio.h>
#include <math.h>

void main()
{
      double  p[3][2];                                 // 这是存放输入的
      double  x0, y0, r;                               // 这是放结果的
      double  a11, a12, a21, a22, b1, b2;  // 这些是临时存数用的
      
      scanf( "%lf%lf%lf%lf%lf%lf", &p[0][0], &p[0][1], &p[1][0], &p[1][1], &p[2][0], &p[2][1] );

	  a11 = p[1][0] - p[0][0];
	  a12 = p[1][1] - p[0][1];
	  a21 = p[2][0] - p[0][0];
	  a22 = p[2][1] - p[0][1];

	  b1 = (p[1][0]*p[1][0] - p[0][0]*p[0][0] +p[1][1]*p[1][1] - p[0][1]*p[0][1])/2 ;
	  b2 = (p[2][0]*p[2][0] - p[0][0]*p[0][0] +p[2][1]*p[2][1] - p[0][1]*p[0][1])/2 ;

	  x0 = (b1*a22 - a12*b2)/(a11*a22 - a12*a21);
	  y0 = (a11*b2 - a21*b1)/(a11*a22 - a12*a21);
	  r = sqrt( (x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0));

      printf( "(%lf,%lf), r = %lf", x0, y0, r );
}
