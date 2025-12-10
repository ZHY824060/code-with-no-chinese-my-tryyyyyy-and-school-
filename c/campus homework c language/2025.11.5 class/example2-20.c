#include <stdio.h>
int main()
{  int x,y;
   printf("x=");
   scanf("%d",&x);
   y=x>0?1:x<0?-1:0;             /*结合方向：由右向左*/
   printf("x=%d,y=%d\n",x,y);
   return 0;
}




