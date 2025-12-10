#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   int secret_number,guess,attempts=0;
   int max_attempts=10;
   int play_again=1;

   srand(time(NULL));

   printf("欢迎来到龚艳的猜数字游戏！\n");

   while(play_again)
   {
      secret_number=rand()%100+1;
      attempts=0;

      printf("现在，我已经想到了一个1到100之间的数字，试试猜出来吧！\n");
      printf("你还有%d次机会。\n",max_attempts);
 

   do
   {
      printf("请输入你的猜想（1到100之间哦）:");
      
      if(scanf("%d",&guess)!=1)
      {
         printf("请输入有效的数字哦！\n");
         while(getchar()!='\n');
         continue;
      }

      if(guess<1||guess>100)
      {
         printf("请输入1到100之间的数字！\n");
         continue;
      }

      attempts++;

      if(guess<secret_number)
      {
         printf("不对，这个数字应该更大一点儿！\n");
      }

      else if(guess>secret_number)
      {
         printf("不对，这个数字应该更小一点儿！\n");
      }

      else
      {
         printf("恭喜你猜对啦！这个数字就是%d！\n",secret_number);
         printf("你总共尝试了%d次，下次可以做的更好吗？\n",attempts);
         break;
      }

      printf("再试一次吧！你还剩%d次机会。\n",max_attempts-attempts);

      if(attempts==3)
      {
         if(secret_number%2==0)
         {
            printf("提示一下，这个数字是偶数哦！\n");
         }
         else
         {
            printf("提示一下，这个数字是奇数哦！\n");
         }
      }
      else if(attempts==6)
      {
         int lower=(secret_number/10)*10;
         printf("提示一下，这个数字在%d到%d之间...\n",lower,lower+9);
      }

      if(attempts==max_attempts)
      {
         printf("抱歉，机会已经用完啦！\n");
         printf("正确的数字是%d，下次努力吧！\n",secret_number);
         break;
      }
   }while(1);

   printf("\n\n还想要再来一次吗？输入1再来一局，输入0结束游戏：");
   if(scanf("%d",&play_again)!=1)
   {
      play_again=0;
   }

   while(getchar()!='\n');
 } 
   printf("感谢游玩！再见！\n");
   return 0;
}