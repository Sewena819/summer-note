#include<stdio.h>

void main()
{
	printf("a - 菜单1\n");
	printf("b - 菜单2\n");
	printf("c - 菜单3\n");
	printf("x - 退出\n");
	char i;
	while(1){
		scanf("%c",&i);
		switch(i)
		{
		case 'a':case 'A':
			printf("你选择了菜单1\n");
			break;
		case 'b':case 'B':
			printf("你选择了菜单2\n");
			break;
		case 'c':case 'C':
			printf("你选择了菜单3\n");
			break;
		case 'x':case'X':
			printf("你选择了退出\n");
			break;
		default:
			printf("该功能不存在\n");
			return;
		}
	}
}