#include <stdio.h>
int main()
{  int n=5;	
   switch(n--) 
   {  case 6:	printf("%d ",n++);	break;	
      case 5:	printf("%d ",n);    
      default:	printf("%d ",n);   
   }  
   return 0;
}

#include <stdio.h>
int main() 
{ int n = 5;
 switch(n--)
 {  case6:printf("%d",n++);break;
    case5:printf("%d",n);
    default:printf("%d",n);
 }
  return 0;
}
