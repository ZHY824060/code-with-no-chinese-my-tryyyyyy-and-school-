#include<stdio.h>
#include <string.h>
int main( )
{  char a[ ]="abcde";
   char b[11]="12345";
   strcat(b,a);
   printf("%s,%s\n",a,b);
   return 0;
}


