#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void event(int *health) {
    int random_event = rand() % 3;  // 产生一个随机事件

    switch (random_event) {
        case 0:
            printf("\n你遇到了一只怪物！准备战斗！\n");
            printf("1. 用剑攻击\n");
            printf("2. 用魔法攻击\n");
            printf("请输入选择（1-2）：");
            int action;
            scanf("%d", &action);

            switch (action) {
                case 1:
                    printf("\n你用剑砍伤了怪物！你受到了轻微的伤害。\n");
                    *health -= 10;  // 战斗伤害
                    break;
                case 2:
                    printf("\n你用魔法击败了怪物！你没有受伤。\n");
                    break;
                default:
                    printf("\n选择无效，怪物攻击了你！\n");
                    *health -= 20;  // 错误选择受到更大伤害
                    break;
            }
            break;
        case 1:
            printf("\n你发现了一个隐蔽的宝箱！\n");
            printf("1. 打开宝箱\n");
            printf("2. 离开宝箱，继续前进\n");
            scanf("%d", &action);

            switch (action) {
                case 1:
                    printf("\n宝箱里有金币和治疗药水，你恢复了一些生命！\n");
                    *health += 15;  // 恢复生命
                    break;
                case 2:
                    printf("\n你决定继续前进，错过了宝箱里的奖励。\n");
                    break;
                default:
                    printf("\n选择无效，你错过了机会。\n");
                    break;
            }
            break;
        case 2:
            printf("\n你走到了一个分岔口，决定做出选择：\n");
            printf("1. 进入左边的暗道\n");
            printf("2. 进入右边的光明道路\n");
            scanf("%d", &action);

            switch (action) {
                case 1:
                    printf("\n暗道充满了阴霾，你听见了奇怪的声音，决定快速离开。\n");
                    *health -= 5;  // 受到少许伤害
                    break;
                case 2:
                    printf("\n光明道路安全无恙，你顺利前行，获得了一些奖励！\n");
                    *health += 10;  // 恢复生命
                    break;
                default:
                    printf("\n选择无效，迷路了，受了一些伤。\n");
                    *health -= 10;  // 错误选择
                    break;
            }
            break;
        default:
            printf("\n发生了未知事件，准备应对！\n");
            *health -= 5;  // 默认伤害
            break;
    }
}

int main() {
    int health = 100;
    int action;

    srand(time(0));  // 用时间种子初始化随机数

    printf("欢迎来到迷宫冒险游戏！\n");
    printf("你现在有 %d 生命值。\n", health);

    while (health > 0) {
        printf("\n你进入了一个新的区域，前方有选择的机会：\n");
        printf("1. 探索附近的怪物\n");
        printf("2. 寻找隐藏的宝箱\n");
        printf("3. 选择一条新道路\n");
        printf("请输入选择（1-3）：");
        scanf("%d", &action);

        switch (action) {
            case 1:
                printf("\n你选择了与怪物对抗！\n");
                event(&health);
                break;
            case 2:
                printf("\n你选择了寻找宝箱！\n");
                event(&health);
                break;
            case 3:
                printf("\n你选择了走新道路！\n");
                event(&health);
                break;
            default:
                printf("\n无效选择，请重新选择。\n");
                break;
        }

        printf("\n你的生命值是：%d\n", health);

        if (health <= 0) {
            printf("\n你死了，游戏结束！\n");
            break;
        }
    }

    return 0;
}
