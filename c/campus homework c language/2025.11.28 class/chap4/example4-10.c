#include <stdio.h>
#define N 10
int main()
{  int i,j,t,p,a[N]={67,33,25,8,5,10,-7,23,17,22};
 for (i=0;i<N-1;i++)
 {  for (j=i+1;j<N;j++)
  		if (a[i]>a[j])
  			{  t=a[i];a[i]=a[j]; a[j]=t; }
 }
 for (i=0;i<N;i++)
   printf("%d ",a[i]);
   printf("\n");
   return 0;
}


