#include <stdio.h>
int main()
{  int a,b,x;
   x=(a=8,b=15,b++,a+b);
   printf("a=%d,b=%d,x=%d\n",a,b,x);
   return 0;
}




