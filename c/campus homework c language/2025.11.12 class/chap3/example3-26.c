#include <stdio.h>
int main()
{	 int i,j,k,m1,m2;
	 printf ("narcissus numbers are: ");
	 for (i=1; i<=9; i++)
   for (j=0; j<=9; j++)
   for (k=0; k<=9; k++)
   {
      m1=i*100+j*10+k;       			/*m1为三个数字分别 为i、j、k的三位数*/
      m2=i*i*i+j*j*j+k*k*k;				/*m2为三个数字的立方和*/
      if(m1==m2) 
         printf("%4d",m1);      		/*输出满足水仙花条件的数*/
   }
   printf("\n");
	 return 0;
}


