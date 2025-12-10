#include <stdio.h>
int main()
{  int a,y;
   a=10,y=0;
   do 
   {  a+=2;
      y+=a;
      if (y>50) break;
   }while (a=14);     /*每次循环到此,a值都为14*/
   printf("a=%d,y=%d\n",a,y);
   return 0;
}

