#include <stdio.h>
int main()
{  int x=0x55,y=0x5a;
   printf("%x  ",x&y);
   printf("%x  ",x|y);
   printf("%x  ",x^y);
   printf("%x  ",~x);
   printf("%x  ",x>>4);
   printf("%x  ",x<<2);
   return 0;
}






