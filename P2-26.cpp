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
       printf( "�ַ�%c��ASCII����%d\n", a, a );
       printf( "������һ������: ");
       scanf( "%c", &a );
       printf( "��������ֵΪ%d", a-'0'); 
       printf( "������һ��Сд��ĸ: " );
       scanf( "%c", &a );
       printf( "%c�Ĵ�дΪ%c\n", a-'a'+'A' );      
}
