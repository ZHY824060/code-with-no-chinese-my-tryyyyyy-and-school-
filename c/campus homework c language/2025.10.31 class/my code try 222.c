#include <stdio.h>
int max(int x, int y)
{
    //定义max
	int z;
	if (x > y)
	{
		z = x;
	}
	else
	{
		z = y;
	}

	return z;
}


int main()
{
    //使用max对比a和b的大小
	int a, b, c;
    printf("请输入两个整数哦:\n");
    scanf("%d %d", &a, &b);
	c = max(a, b);
	printf("比较大的值：%d\n", c);
	return 0;
}
