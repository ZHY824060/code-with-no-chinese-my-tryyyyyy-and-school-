#include <stdio.h>
int main()
{  int i,x;
   for ( i=1,x=1;i<=50;i++)
   {  if (x>=10) break;
      if (x%2==1)
      { x+=5; continue; }
      x-=3;
   }
   printf("x=%d,i=%d",x,i);
   return 0;
}

