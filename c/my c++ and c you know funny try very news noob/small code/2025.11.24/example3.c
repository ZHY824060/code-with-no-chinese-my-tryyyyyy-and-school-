#include <stdio.h>
int main() {
    //我现在需要计算1+3，4+6，8+9
    int add(int x,int y);
    int a,b,c,d,e,f,g,h,i;
    printf("请输入你需要进行加法的两个数字（用空格隔开）：\n");
    scanf("%d %d",&a,&b);
    c=add(a,b);
    printf("结果为：%d\n",c);

    printf("请继续输入你需要进行加法的两个数字（用空格隔开）：\n");
    scanf("%d %d",&d,&e);
    f=add(d,e);
    printf("结果为：%d\n",f);

    printf("请继续输入你需要进行加法的两个数字（用空格隔开）：\n");
    scanf("%d %d",&g,&h);
    i=add(g,h);
    printf("结果为：%d\n",i);

    printf("您已经成功完成了三次加法计算。\n");
    printf("您第一次输入的数字是：%d和%d。结果为%d。\n",a,b,c);
    printf("您第二次输入的数字是：%d和%d。结果为%d。\n",d,e,f);
    printf("您第三次输入的数字是：%d和%d。结果为%d。\n",g,h,i);
    return 0;
}


int add(int x,int y)
{
    int z;
    z = x + y;
    return(z);
}