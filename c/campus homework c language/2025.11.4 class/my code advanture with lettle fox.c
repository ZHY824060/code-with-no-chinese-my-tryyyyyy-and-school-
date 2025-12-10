#include <stdio.h>
#include <stdlib.h>   // 用于 rand() 和 srand()
#include <time.h>     // 用于 time()，初始化随机数

int main() {
    int choice;
    int hp = 20;        // 你的血量
    int gold = 0;       // 你的金币
    srand(time(NULL));  // 初始化随机数种子

    printf("欢迎来到小韵宝宝的高端跑团冒险！\n\n");

    // 第一个分叉路口
    printf("你站在一个十字路口，面前有两条路：\n");
    printf("1. 通向神秘森林\n");
    printf("2. 通向古老城堡\n");
    printf("请选择你的路径（输入 1 或 2）：");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\n你进入了森林，鸟儿唱着歌，阳光洒满小路。\n");

        int event = rand() % 2; // 随机事件
        if (event == 0) {
            printf("你遇到了一只小怪兽！\n");
            printf("它攻击了你，你损失了 5 点血量。\n");
            hp -= 5;
        } else {
            printf("你发现了一颗金币！获得 10 金币。\n");
            gold += 10;
        }

        printf("你现在的血量：%d，金币：%d\n", hp, gold);

        printf("你看到一条小河，是否要尝试过河？\n");
        printf("1. 过河\n2. 绕道\n");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("河水很深，你消耗 2 点血量游过去。\n");
            hp -= 2;
        } else {
            printf("你绕道而行，安全到达对岸。\n");
        }

    } else if (choice == 2) {
        printf("\n你走进了城堡，石墙厚重，气氛神秘。\n");

        int event = rand() % 2;
        if (event == 0) {
            printf("你发现了一扇宝箱门，里面有 20 金币！\n");
            gold += 20;
        } else {
            printf("一只守卫攻击你，你损失 3 点血量。\n");
            hp -= 3;
        }

        printf("你现在的血量：%d，金币：%d\n", hp, gold);

        printf("你看到楼梯向上延伸，是否要爬上去探索？\n");
        printf("1. 爬上去\n2. 不爬\n");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("楼上有一个古老图书馆，你学到了一本秘术，提高勇气值！\n");
        } else {
            printf("你选择休息，保存体力。\n");
        }
    } else {
        printf("\n输入无效，冒险结束啦。\n");
    }

    printf("\n冒险结束！你的最终血量：%d，金币：%d\n", hp, gold);
    printf("谢谢你玩小韵的跑团冒险！\n");

    return 0;
}
