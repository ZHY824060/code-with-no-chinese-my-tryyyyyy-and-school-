#include <stdio.h>
#define N 15
int main()
{  int i,a[N]={2,5,8,12,15,17,19,23,24,28,29,31,33,36,38};
 int left=0,mid,right=N-1,x;
   printf("x=");
   scanf("%d",&x);
   do {  mid=(left+right)/2;
        	if (x==a[mid])
        	{  printf("\na[%d]=%d\n",mid,x);
 break;
}
        else if(x>a[mid])  left=mid+1;
        else  right=mid-1;
   }while (left<=right);
   if (left>right) printf("\nNo found!\n");
   return 0;
}


