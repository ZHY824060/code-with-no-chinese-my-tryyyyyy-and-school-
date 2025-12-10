//输入整数判断是奇数还是偶数，输入分数输出等级，输入年份判断是不是闰年
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("请输入一个整数：\n");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("这个数字是偶数！\n");
    }
    else
    {
        printf("这个数字是奇数！\n");
    }
    
    printf("做的很棒！\n接下来，请在0到100中挑选一个数字作为你的分数：\n");
    scanf("%d",&b);
    if(b>=101)
    {
        printf("数字太大了呀，这样不行不行！\n我要报错咯!\n");
        return 1;
    }
    else if(b>=90)
    {
        printf("哇塞！你的分数非常高！\n你的评分是A。\n");
    }
    else if(b>=60)
    {
        printf("不错不错，及格了！\n你的评分是B。\n");
    }
    else if(b>=10)
    {
        printf("wow，进步空间很大哦！\n你的评分是C。\n");
    }
    else if(b>=0)
    {
        printf("哇塞！惨绝人寰的分数啊！\n你的评分是：不及格。\n");
    }
    else if(b<=-1)
    {
        printf("数字太小了呀\n我要报错咯\n");
        return 1;
    }

    printf("接下来，请随便输入一个年份！\n举个例子：2016.\n现在轮到你了：");
    scanf("%d",&c);
    if((c%4==0&&c%100!=0)||(c%4==0&&c%400==0))
    {
        printf("这是闰年！\n");
    }
    else
    {
        printf("sorry，这不是闰年！\n");
    }
    
    printf("结束咯，嘻嘻！拜拜！");
}