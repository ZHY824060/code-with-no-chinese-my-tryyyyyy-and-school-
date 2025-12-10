#include <stdio.h>
int main()
{ 
   printf("\nchar：       		%d 字节",sizeof(char));
   printf("\nshort int：   			%d 字节",sizeof(short int));
   printf("\nint：         		%d 字节",sizeof(int));
   printf("\nlong int：    		%d 字节",sizeof(long int));
   printf("\nunsigned int：		%d 字节",sizeof(unsigned int));
   printf("\nfloat：       		%d 字节",sizeof(float));
   printf("\ndouble：      		%d 字节",sizeof(double));
   printf("\nlong double： 		%d 字节",sizeof(long double));
   return 0;
}

