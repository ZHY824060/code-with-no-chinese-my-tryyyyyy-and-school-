#include <stdio.h>
int main() {  int n,n1,n2,n3;
   printf("Input a positive integer(100-999)£º");
   scanf("%d",&n); 
   n1=n%10;
   n2=(n/10)%10;
   n3=n/100;
   printf("The three digits are£º");
   printf("%d,%d,%d\n",n3,n2,n1);
} 

