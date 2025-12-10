#include <stdio.h>
int main()
{  int A,B,C,D,E;
   for (A=2;A<=9;A++)
   for (B=0;B<=9;B++)
   for (C=0;C<=9;C++)
   for (D=0;D<=9;D++)
   for (E=0;E<=9;E++)
   if (A*(B*10+3+C)*A*(B*10+3+C)==8009+D*100+E*10)
      printf("%3d%3d%3d%3d%3d\n",A,B,C,D,E);
   return 0;
}


