#include<stdio.h>
#include<string.h>
int main( )
{  char a[ ]="abcde";
   char b[10];
   b="abcde";       	/*编译出错，应改为strcpy(b, "abcde")*/
   b=a;            	/*编译出错，应改为strcpy(b,a)*/
   return 0;
}


