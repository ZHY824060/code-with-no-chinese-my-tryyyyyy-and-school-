#define PI 3.14159 
#include <stdio.h> 
int main() 
{  float  r;
   printf("请输入半径r："); 
   scanf("%f",&r); 
   if(r>=0) 
      printf("r=%.2f,s=%.2f\n",r,PI*r*r);
   else 
      printf("半径不能为负数！"); 
   return 0;
}

