#include <stdio.h>
#define N 10
int main()
{ int i,j,t,p,a[N]={67,33,25,8,5,10,-7,23,17,22};
for (i=0;i<N-1;i++)
{ p=i;
  for (j=i+1;j<N;j++)
    if (a[p]>a[j]) p=j; 
  if (p!=i)
    { t=a[p];a[p]=a[i]; a[i]=t; }
}
for (i=0;i<N;i++)
printf("%d  ",a[i]);
printf("\n");
return 0;
}


