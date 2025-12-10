#include <stdio.h>
int main()
{  int f1=1,f2=1,f=2,i,s=2;
   for (i=3;i<=12;i++)
   {  s=s+f;
      f1=f2;
      f2=f;
      f=f1+f2;
   }
   printf("%d",s);
   return 0;
}


