#include <stdio.h>
int main()
{  long num;
   int c;
   printf("Input a integer:");
   scanf("%ld",&num);
   do { c=num%10;           /*取得num的个位数*/
       printf("%d",c);     /*输出num的个位数*/
   }while((num/=10)>0);    /*直到num/10为0*/
   return 0;
}
