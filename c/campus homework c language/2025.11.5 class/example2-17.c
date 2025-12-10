#include <stdio.h>
int main()
{  int a,b,c;
   a=b=c=1;
   ++a||++b&&++c;                
   printf("a=%d,b=%d,c=%d\n",a,b,c);   
   return 0;
}



