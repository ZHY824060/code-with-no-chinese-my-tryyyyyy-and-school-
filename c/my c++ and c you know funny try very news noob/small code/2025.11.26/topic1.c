//写一个程序，输入一个整数，输出它是奇数还是偶数。
#include <stdio.h>
int main() {
    int number;
    printf("请输入一个整数，我来判断它是奇数还是偶数：");
    scanf("%d",number);

    if(number / 2 == 0) {
        printf("这是个偶数！毫无疑问的！\n");
    }
    else {
        printf("这是个奇数，没毛病吧？\n");
    }
    
    return 0;
}