#include <stdio.h>
int main()
{  int i,n=10;
	 float s,t;
	 for (i=1,t=1,s=0; i<=n; i++)
   {  t*=i;		
			s+=t;		/*ÀÛ¼Ói!*/
   }
   printf ("s=%f\n",s);
   return 0;
}

