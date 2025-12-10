#include <stdio.h>

int main() {
    int choice;

    printf("请输入你今天想打哪个小李子（1~3）：");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("你轻轻敲了小李子一下，小李子说：哎哟！\n");
            break;

        case 2:
            printf("你用力捶了小李子一下，小李子说：你干嘛！！\n");
            break;

        case 3:
            printf("你抱住小李子揉了揉，小李子脸红了…\n");
            break;

        default:
            printf("没有这个小李子呀，小宝贝重新选一个吧！\n");
    }

    return 0;
}
