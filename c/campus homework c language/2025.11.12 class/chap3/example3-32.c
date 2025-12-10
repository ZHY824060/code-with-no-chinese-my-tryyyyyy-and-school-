#include <stdio.h>
#define N  5
int main()
{  int i,k,j,n=N;
   for ( i=1 ; i<=N ; i++)
   {  for (k=1; k<=N-i; k++)  printf(" ");     /*每行先输出若干空格*/
      for (j=1; j<=2*i-1; j++) printf("*");	    	/*每行再输出若干星号*/
      printf("\n");							    			/*换行为下一行输出做准备*/
   } 
   return 0;
}

