#include  <stdio.h>

void  main()
{
       int  A[10], B[10][20], C[10][20][30]; 
       int  i;

       A[0] = 123;
       A[9] = A[0] + 234;
       i = 1;
       A[i+1] = i + 345;
       B[i][0] = A[i+1] + 456;
       C[i][i][i] = A[i+1] + B[i][0] + 567;
       printf( "%d\n" , C[i][i][i] );
       printf( "请输入3个整数 : "); 
       scanf( "%d%d%d", &A[1], &B[1][2], &C[1][2][3] );
       printf( "%d+%d+%d=%d", A[1], B[1][2], C[1][2][3], A[1]+B[1][2]+C[1][2][3]  );
}
