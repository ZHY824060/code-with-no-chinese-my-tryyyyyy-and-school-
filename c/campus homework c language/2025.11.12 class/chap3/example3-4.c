#include <stdio.h>
	int main()
	{	  int x,y,t;
		  scanf ("%d,%d",&x,&y);
		  if (x>y)
		  {    t=x;
               x=y;
               y=t;   
		  }			 /*a¡¢b½»»»Öµ*/
		  printf ("%d,%d\n",x,y);
		  return 0;
	}

