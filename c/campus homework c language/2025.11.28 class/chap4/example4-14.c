#include <stdio.h>
int main()
{  int a[4][4];
   int i,j,flag=1;
   printf("Please input array a:\n");
   for(i=0;i<4;i++)
   		for(j=0;j<4;j++)
      		scanf("%d",&a[i][j]);
   for(i=0;i<4&&flag;i++)
   		for(j=0;j<i;j++)   					/*变量j不超过i即可*/
      		if(a[i][j]!=a[j][i])
   			{  	flag=0;   							/*若找到不相等的元素则将flag赋值为0*/
      				break;								/*若找到不相等的元素则证明矩阵不对称即可退出循环*/
   			}
   if(flag)									/*flag非0表示是对称矩阵*/
   		printf("Array a is yes!\n");
   else											/*flag为0表示不是对称矩阵*/
   		printf("Array a is no!\n");
   return 0;
}


