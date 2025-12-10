#include <stdio.h>
int main()
{  char op; 
   float x,y;                
   scanf("%f %c %f",&x,&op,&y); 
   switch(op)                        
   {  case '+': printf("=%.2f\n",x+y);break;
      case '-': printf("=%.2f\n",x-y);break;
      case '*': printf("=%.2f\n",x*y);break;
      case '/': 
         if(y==0)
            printf("Division by zero!");
            else
       printf("=%.2f\n",x/y);
break;
               default: printf("Error!");
   }
   return 0;
}