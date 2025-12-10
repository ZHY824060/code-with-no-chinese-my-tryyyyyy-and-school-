#include <stdio.h>
int main()
{  int n,i;
   float x,s=0,p=1;
   printf("x,n=");
   scanf("%f,%d",&x,&n);
   for(i=1;i<=n;i++)
   {  p=p*(-x/i);
      s=s+ p;
   }
   printf("s=%.3f",s);
   return 0;
}

