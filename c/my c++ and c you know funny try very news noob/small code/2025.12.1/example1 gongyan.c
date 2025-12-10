#include <stdio.h> 
int main (){
    int r;
    float s;
    const int  P=3.1415926;

    printf("圆的半径：");
    scanf("%d",&r);

    if ( r<= 0)
    {
        printf("圆的半径不能为负数或0！！！\n" );
    }else{
        s=P * r * r;
        printf("圆的面积：%.2f",s);
    }
    return 0;
}