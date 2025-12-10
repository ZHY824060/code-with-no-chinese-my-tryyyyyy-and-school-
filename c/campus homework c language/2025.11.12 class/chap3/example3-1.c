#include <stdio.h>
int main()
{  int a,b,t;
   printf("Input a,b=");
   scanf("%d,%d",&a,&b);
   t=a;
   a=b; 
   b=t;
   printf("a=%d,b=%d\n",a,b);
   return 0;
}

