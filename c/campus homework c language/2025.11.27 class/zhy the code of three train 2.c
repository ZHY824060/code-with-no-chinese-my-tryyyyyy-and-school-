//通过scanf输入一个百分制成绩，该成绩为整数值，根据以下成绩的范围，要求输出成绩等级‘A’，‘B’，‘C’，‘D’，‘E’。
//90分以上为‘A’，80~89 分为‘B’，70~79 分为‘C’，60~69 分为‘D’，60分以下为‘E’。
//这是用switch语句实现的部分。
#include <stdio.h>
int main() {
    int score;
    printf("请输入100~0之间的一个数字当作你的分数：");
    scanf("%d",&score);

    if(score < 0 || score > 100) {
        printf("请输入正确范围内的数字！\n");
        return 1;
    }
    switch(score / 10) {
        case 9 : printf("您的评分是A。"); break;
        case 8 : printf("您的评分是B。"); break;
        case 7 : printf("您的评分是C。"); break;
        case 6 : printf("您的评分是D。"); break;
        default: printf("您的评分是E。"); 
    }
    return 0;
}