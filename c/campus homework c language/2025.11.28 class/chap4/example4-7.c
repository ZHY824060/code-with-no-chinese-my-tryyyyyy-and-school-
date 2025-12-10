#include <stdio.h>
int main()
{  int i,x,a[10]={6,3,42,23,35,71,98,67,56,38};
   printf("x=");
   scanf("%d",&x);
   for (i=0;i<=9;i++)
      if (a[i]==x)
   		{ 	printf("\na[%d]=%d\n",i,x);
      		return 0;
   		}
   if (i==10) printf("No found!");
   return 0;
}


