#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
int main()
{
	float a, b, c, s, area;
	printf("请输入三角形的三条边（请用空格分隔，例如：3,4,5）: ");
	scanf("%f %f %f",&a, &b, &c);

// 验证三角形
	if (a <= 0 || b <= 0 || c <= 0 ||
	a + b <= c || a + c <= b || b + c <= a) {
	printf("错误：这三条边不能构成有效的三角形！\n");
	return 1;
}
	s = (a + b + c) / 2.0;
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("a=%f\n b=%f\n c=%f\n area=%f\n", a, b, c, area);
	return 0;

}