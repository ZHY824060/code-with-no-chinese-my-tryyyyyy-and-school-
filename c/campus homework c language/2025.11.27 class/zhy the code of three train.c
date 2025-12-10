//通过scanf输入一个百分制成绩，该成绩为整数值，根据以下成绩的范围，要求输出成绩等级‘A’，‘B’，‘C’，‘D’，‘E’。
//90分以上为‘A’，80~89 分为‘B’，70~79 分为‘C’，60~69 分为‘D’，60分以下为‘E’。
//这是用if语句实现的部分。
#include <stdio.h>
int main() {
    int score;
    printf("请输入100~0之间的一个数字当作你的分数：");
    scanf("%d",&score);

//先写个报错滴！
    if(score >= 101 || score <= -1) {
        printf("请输入正确的分数区间！");
        return 1;
    }

    else if (score >= 90) {
        printf("您的成绩等级是A。");
    }

     else if (score >= 80) {
        printf("您的成绩等级是B。");
    }

     else if (score >= 70) {
        printf("您的成绩等级是C。");
    }

     else if (score >= 60) {
        printf("您的成绩等级是D。");
    }

     else if (score >= 0) {
        printf("您的成绩等级是E。");
    }
    
    return 0;
}