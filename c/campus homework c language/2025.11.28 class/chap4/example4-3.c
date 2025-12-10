#include <stdio.h>
#define NUM  50       								/*此句宏定义使程序更具通用性*/
int main()
{
   int i,score[NUM],high;
   float sum,aver;
   for (i=0;i<NUM;i++)              			/*依次读入全班同学分数*/
      scanf("%d",&score[i]);
   printf("全班同学成绩公布如下：\n");   		/*公布全班同学分数*/
   for (i=0;i<NUM;i++)
   {  printf("\n%d号同学：%5d",i+1,score[i]);
      if (i%10==9) printf("\n");
   }
   for (i=0;i<NUM;i++)     							/*求平均成绩并显示出来*/
      sum+=score[i];
   aver=sum/NUM;
   printf("\n全班平均分是：%.2f\n",aver);
   high=score[0];
   for (i=0;i<NUM;i++)
      if (score[i]>high)  high=score[i];
   printf("\n最高分是：%d\n",high);
   return 0;
}

