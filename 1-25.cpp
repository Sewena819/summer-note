#include<stdio.h>
 void main()
 {
	 int i,j;
	 int jz1[4][4];
	 int jz2[4][4];
	 int jz3[4][4];
	 printf("�������������1����ֵ:\n");
	 for(i=0;i<=3;i++){
		 for(j=0;j<=3;j++)
			 scanf("%d",&jz1[i][j]);
	 }
	 for(i=0;i<=3;i++){
		 for(j=0;j<=3;j++){
			 printf("%d\t",jz1[i][j]);
			 if((j+1)%4==0)
				 printf("\n");
		 }
	 }
	 printf("\n");
	 printf("�������������2����ֵ:\n");
	 for(i=0;i<=3;i++){
		 for(j=0;j<=3;j++)
			 scanf("%d",&jz2[i][j]);
	 }
	 for(i=0;i<=3;i++){
		 for(j=0;j<=3;j++){
			 printf("%d\t",jz2[i][j]);
			 if((j+1)%4==0)
				 printf("\n");
		 }
	 }
	 printf("\n");
	 printf("����1��2�ĺ�:\n");
	 for(i=0;i<=3;i++){
		 for(j=0;j<=3;j++)
			 jz3[i][j]=jz1[i][j]+jz2[i][j];
	 }
	 for(i=0;i<=3;i++){
		 for(j=0;j<=3;j++){
			 printf("%d\t",jz3[i][j]);
			 if((j+1)%4==0)
				 printf("\n");
		 }
	 }
	 
 }