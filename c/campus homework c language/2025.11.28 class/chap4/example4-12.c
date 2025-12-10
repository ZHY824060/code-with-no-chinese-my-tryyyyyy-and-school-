#include <stdio.h>
#define N 10
int main()
{  int i,j,m,a[N]={67,33,25,8,5,10,-7,23,17,22};
   for (i=1;i<N;i++)
   {  m=a[i];
      j=i-1;
      while (j>=0&&m>a[j])
      {  a[j+1]=a[j];
         j--;
      }
      a[j+1]=m;
   }
   for (i=0;i<N;i++)
   printf("%d ",a[i]);
   printf("\n");
   return 0;
}

