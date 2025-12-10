// 1、定义两个整型变量a、b并分别初始化为12、18；
// 2、采用穷举法求两个数的最大公约数（以最小那个数为基准值进行穷举）；
// 3、要求分别采用while、do…while及for循环实现。
//这个是用do-while实现的笑，另外我是张恒韵，嗯，你管我在注释些什么呢？我对自己的代码有占有欲。
#include <stdio.h>

int main() {
    printf("使用do-while实现求12和18的最大公约数功能\n");
    int a = 12;
    int b = 18;
    int GCD = a < b ? a : b;
    int c = GCD;

    do
    {
        if(a % c == 0 && b % c == 0) {
            printf("最大公约数是%d",c);
            break;
        }
    c--;
    } while (c > 0);
    
    return 0;
}