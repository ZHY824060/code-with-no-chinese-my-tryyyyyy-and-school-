#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("请输入一些数字，输入负数结束：\n");

    while (1) {
        printf("请输入一个数字：");
        scanf("%d", &number);

        if (number < 0) {
            break;  // 输入负数时退出循环
        }

        if (number == 0) {
            continue;  // 输入 0 时跳过，继续下次循环
        }

        sum += number;  // 累加正数
    }

    printf("所有正数的和是：%d\n", sum);

    return 0;
}
