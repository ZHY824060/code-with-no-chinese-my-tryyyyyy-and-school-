#include <stdio.h>

int main() {
    int a;
    printf("请输入一个数字，0到30之间：");
    scanf("%d",&a);

    if(a >= 0 && a <= 10) {
        printf("你的评分是A。");
    }
    else if(a > 10 && a <= 20) {
        printf("你的评分是B。");
    }
    else {
        printf("你的评分是C。");
    }

return 0;
}