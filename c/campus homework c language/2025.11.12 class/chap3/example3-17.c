#include <stdio.h>
int main()
{  int i,n;  float p;
   printf("Input an integer:");
   scanf("%d",&n);
   i=1;p=1;
   do{  p*=i;
		    i++;
	    } while (i<=n);
	 printf("n!=%.0f\n",p);
   return 0;	
}
