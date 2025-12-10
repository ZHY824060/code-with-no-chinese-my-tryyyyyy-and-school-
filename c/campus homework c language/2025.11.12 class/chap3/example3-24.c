#include <stdio.h>
int main()
{  int i,k=0;
   for (i=1;  ;i++)
   {  k++;
      while (k<i*i)
         {  k++;
            if (k%3==0) goto loop; /* 可跳到循环体外任何处*/
         }
   }
   loop:printf("%d,%d",i,k);
   return 0;
}

