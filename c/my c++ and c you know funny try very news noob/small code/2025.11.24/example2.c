#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int health = 10;         // 小韵的生命值
    int gold = 0;            // 收集的金币
    int turn = 1;            // 回合计数
    char choice;
    srand(time(NULL));       // 随机数种子

    printf("欢迎来到《小李子探险记》！\n");
    printf("小韵带着小李子开始探险，注意健康值和金币哦！\n\n");

    while (health > 0 && turn <= 10) {
        printf("第 %d 回合：\n", turn);
        printf("你的生命值：%d，金币：%d\n", health, gold);
        printf("请选择行动：\n");
        printf("a - 去树林探险\n");
        printf("b - 去河边钓鱼\n");
        printf("c - 在营地休息\n");
        printf("输入选项 (a/b/c)：");

        scanf(" %c", &choice);

        switch (choice) {
            case 'a': {
                int event = rand() % 3; // 0-2 随机事件
                if (event == 0) {
                    printf("你遇到小怪物，和小李子一起战斗，损失 2 生命值。\n");
                    health -= 2;
                } else if (event == 1) {
                    printf("你在树林里找到了金币 +3！\n");
                    gold += 3;
                } else {
                    printf("没遇到什么特别的事情。\n");
                }
                break;
            }

            case 'b': {
                int fish = rand() % 2; // 0-1 钓鱼事件
                if (fish == 0) {
                    printf("钓到一条大鱼，小李子高兴极了！金币 +2\n");
                    gold += 2;
                } else {
                    printf("鱼跑掉了，小李子有点失望。\n");
                }
                break;
            }

            case 'c': {
                printf("休息一回合，生命值 +1\n");
                health += 1;
                break;
            }

            default:
                printf("输入错误，浪费了一回合，小李子皱眉头...\n");
        }

        // 小特效：打印分割线
        for (int i = 0; i < 20; i++) {
            printf("-");
        }
        printf("\n");

        turn++; // 回合增加
    }

    // 游戏结束判断
    if (health <= 0) {
        printf("小韵的生命值为 0，探险失败！小李子哭了……\n");
    } else {
        printf("10 回合结束，探险完成！你收集了 %d 金币，生命值 %d\n", gold, health);
        if (gold >= 10) {
            printf("小韵和小李子成为了最富有的小探险家！\n");
        } else {
            printf("小韵和小李子平安回家，虽然金币不多，但满满幸福！\n");
        }
    }

    return 0;
}
