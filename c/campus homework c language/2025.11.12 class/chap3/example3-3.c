#include <stdio.h>
#include <math.h>
int main()
{   float a,b,c,d,x1,x2;
printf ("Input a,b,c: ");
scanf ("%f,%f,%f",&a,&b,&c); 
d=b*b-4*a*c;		 
x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);
printf ("\nx1=%.2f,x2=%.2f\n",x1,x2);
return 0;
}

