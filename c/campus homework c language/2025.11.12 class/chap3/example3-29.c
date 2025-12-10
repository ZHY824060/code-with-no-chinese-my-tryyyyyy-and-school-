#include <stdio.h>
int main()
{  int i;
   float s=0;
   for (i=1;i<=100;i++)
      if (i%2) s=s+1.0/i;
      else s=s-1.0/i;
   printf("s=%f\n",s);
   return 0;
}

