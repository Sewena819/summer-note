#include <stdio.h>
#include <iostream>

void main()
{
	FILE *fp;
	if((fp=fopen("123.txt","a"))==NULL)
		printf("file cannot open\n");
	else
		printf("file opened for waiting \n");
	char ch = 'e';
	fputc(ch,fp);//���뵽�ļ���
	if(fclose (fp)!= 0)
		printf("file cannot be closed \n");
	else
		printf("file is now closed \n");
}
/*
#include <stdio.h>
#include <stdlib.h>
int main() {
    char *s="That's good news"; 
    int i=617; 
    FILE *fp;
    fp=fopen("test.dat", "w"); //����һ�������ļ�ֻд
    fputs("Your score of TOEFL is",fp); //�������ļ�д��һ���ַ�
    fputc(':', fp); //�������ļ�дð��:
    fprintf(fp, "%d/n", i); //�������ļ�дһ������
    fprintf(fp, "%s", s); //�������ļ�дһ�ַ���
    fclose(fp);
} 
*/


/*
#include <stdio.h>
int main() {
    char s[24], m[20]; 
    int i;
    FILE *fp;
    fp=fopen("test.dat", "r"); //�������ļ�ֻ��
    fgets(s, 24, fp); //���ļ��ж�ȡ23���ַ�
    printf("%s", s); 
    fscanf(fp, "%d", &i); //��ȡ������
    printf("%d", i); 
    putchar(fgetc(fp)); //��ȡһ���ַ�ͬʱ���
    fgets(m, 17, fp); //��ȡ16���ַ�
    puts(m); //��������ַ���
    fclose(fp); 
} 
*/