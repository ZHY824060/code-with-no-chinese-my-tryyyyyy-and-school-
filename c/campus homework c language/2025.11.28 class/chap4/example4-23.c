#include<stdio.h>
#include <string.h>
int main( )
{  char s[ ]="This is a source string.", b[20];
   strncpy(b,s,16);
   b[16]='\0';
   printf("%s\n",b);
   return 0;
}





