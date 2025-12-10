#include <stdio.h>
int main()
{  int m,i,k;
   printf ("Enter an integer:\n");
	 scanf("%d",&m);
	 k=m/2;
	 for (i=2; i<=k; i++)
	    if(m%i==0) break;
	 if(i>k)
	    printf ("%d is a prime number\n",m); 
	 else
	    printf("%d is not a prime number\n",m);
   return 0;
}

