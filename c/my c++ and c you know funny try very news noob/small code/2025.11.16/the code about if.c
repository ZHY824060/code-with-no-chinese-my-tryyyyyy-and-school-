#include <stdio.h>

int main()
{
    //我想要测一下关于if中不定义的代码，所以我猜，开始吧。
    float a=3.14;

    if(a)
    {
        printf("如果这生效了，说明其实小数也被判断为true。");
    }
    else
    {
        printf("如果这没生效，说明小数其实不是0，也不是1，也不是任何东西？？");
    }
    
}