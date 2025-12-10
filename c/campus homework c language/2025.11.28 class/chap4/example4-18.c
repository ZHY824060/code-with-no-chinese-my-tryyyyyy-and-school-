#include <stdio.h>
int main()
{  char name[20];
   printf("What's your name?");
   gets(name);
   printf("Hi,%s,nice to meet you!\n",name);
   return 0;
}
