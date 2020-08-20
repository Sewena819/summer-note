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
	fputc(ch,fp);//输入到文件中
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
    fp=fopen("test.dat", "w"); //建立一个文字文件只写
    fputs("Your score of TOEFL is",fp); //向所建文件写入一串字符
    fputc(':', fp); //向所建文件写冒号:
    fprintf(fp, "%d/n", i); //向所建文件写一整型数
    fprintf(fp, "%s", s); //向所建文件写一字符串
    fclose(fp);
} 
*/


/*
#include <stdio.h>
int main() {
    char s[24], m[20]; 
    int i;
    FILE *fp;
    fp=fopen("test.dat", "r"); //打开文字文件只读
    fgets(s, 24, fp); //从文件中读取23个字符
    printf("%s", s); 
    fscanf(fp, "%d", &i); //读取整型数
    printf("%d", i); 
    putchar(fgetc(fp)); //读取一个字符同时输出
    fgets(m, 17, fp); //读取16个字符
    puts(m); //输出所读字符串
    fclose(fp); 
} 
*/