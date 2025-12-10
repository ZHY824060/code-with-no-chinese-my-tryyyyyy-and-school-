#include <stdio.h>
int main() {
    int i,j,k,m1,m2;
    printf("水仙数字们：");
    for (i = 1;i <= 9; i++)
        for (j = 0;j <= 9;j++)
            for (k = 0;k <= 9;k++) {
                m1=i * 100 + j * 10 +k;
                m2=i * i * i + j * j * j + k * k * k;
                if (m1 == m2) {
                    printf("%d",m1);
                }
            }
    return 0;
}