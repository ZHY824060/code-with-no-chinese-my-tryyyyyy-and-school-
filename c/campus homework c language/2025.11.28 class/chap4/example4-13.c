#include <stdio.h>
int main()
{  int i,j,x,y,max;
   int a[][4]={3,5,8,1,6,9,7,12,-6};
   max=a[0][0];
   for (i=0;i<3;i++)
   	for (j=0;j<4;j++)
   		if (a[i][j]>max)
   			{  max=a[i][j];
	  				 x=i;
	    			 y=j;
   			}
   printf("max is a[%d][%d]=%d\n",x,y,max);
   return 0;
}

