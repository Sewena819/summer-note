#include<stdio.h>

void main()
{
	printf("a - �˵�1\n");
	printf("b - �˵�2\n");
	printf("c - �˵�3\n");
	printf("x - �˳�\n");
	char i;
	while(1){
		scanf("%c",&i);
		switch(i)
		{
		case 'a':case 'A':
			printf("��ѡ���˲˵�1\n");
			break;
		case 'b':case 'B':
			printf("��ѡ���˲˵�2\n");
			break;
		case 'c':case 'C':
			printf("��ѡ���˲˵�3\n");
			break;
		case 'x':case'X':
			printf("��ѡ�����˳�\n");
			break;
		default:
			printf("�ù��ܲ�����\n");
			return;
		}
	}
}