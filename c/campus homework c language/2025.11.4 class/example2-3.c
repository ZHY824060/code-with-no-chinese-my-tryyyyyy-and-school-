#include <stdio.h>
int main()
{  short int n=32767,sum1,sum2;
   sum1=n+1;sum2=n+2;
   printf("%hd+1=%hd\n",n,sum1); 
   printf("%hd+2=%hd\n",n,sum2);
   return 0;
}

