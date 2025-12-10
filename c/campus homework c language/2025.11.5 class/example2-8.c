#include <stdio.h>
int main()
{  char c1='a',c2='b';
   printf("%c  %c\n",c1,c2); 
   printf("%c  %d\n",c1,c2);
   printf("%d  %c\n",c1,c2);
   printf("%d  %d\n",c1,c2);
   printf("%d  %c\n",c1-32,c2-32);
   printf("%%d  %c\n",97,98);/*连续两个%%输出%*/
   return 0;
}


