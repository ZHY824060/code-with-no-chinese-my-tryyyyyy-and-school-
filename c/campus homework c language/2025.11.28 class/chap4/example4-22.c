#include<stdio.h>
#include <string.h>
int main( )
{  char s[10],sp[ ]="HELLO";
   strcpy(s,sp);
   s[0]='h';
   s[6]='!';
   puts(s);
   return 0;
}


