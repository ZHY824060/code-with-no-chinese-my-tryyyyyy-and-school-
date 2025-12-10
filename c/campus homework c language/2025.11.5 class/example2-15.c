#include <stdio.h>
int main()
{  int m=5;
   if (m++>5)
   {
      printf("m>5");
   } 
   else 
   {  printf("m=%d,",m--);
      printf("m=%d",m--);
   }
   return 0;
}




