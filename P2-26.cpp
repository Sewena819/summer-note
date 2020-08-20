#include  <stdio.h>

void  main()
{
       char  a;
       printf( "%c %c %c ... %c\n",  65,  66,  67,  65+25 );
       printf( "%c %c %c ... %c\n", 'A','B','C','Z' );
       printf( "%d %d %d ... %d\n", 'A','B','C','Z'  );
       printf( "%c %c %c ... %c\n",  97,  98,  99,  97+25 );
       printf( "%c %c %c ... %c\n", 'a','b','c','z' );
       printf( "%d %d %d ... %d\n", 'a','b','c','z' );
       printf( "%c %c %c ... %c\n",  48,  49,  50,  48+9 );
       printf( "%c %c %c ... %c\n",  '0','1','2','9' );
       printf( "%d %d %d ... %d\n",  '0','1','2','9' );
       printf( "%d  %d  %d  %d\n",  '\\','\r','\n','\123' );
       scanf( "%c", &a );
       printf( "字符%c的ASCII码是%d\n", a, a );
       printf( "请输入一个数字: ");
       scanf( "%c", &a );
       printf( "其整型数值为%d", a-'0'); 
       printf( "请输入一个小写字母: " );
       scanf( "%c", &a );
       printf( "%c的大写为%c\n", a-'a'+'A' );      
}
