#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int num1, num2, sum;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d\n",sum);
//	return 0;
//}
//int main()
//{
//	float C, F;
//	scanf("%f", &F);
//	C = (5.0 / 9)*(F - 32);
//	printf("F=%f\nC=%f\n",F, C);
//	return 0;
//}
//int main()
//{
//	int Q; 
//	float H1, H2, r1, r2;
//	scanf("%d%f", &Q,&r1);
//    H1 = Q*(1 + r1);
//	printf("H1=%f\n", H1);
//	scanf("%d%f", &Q, &r2);
//	H2 = Q*(1 + r2);
//	printf("H2=%f\n", H2);
//	return 0;
//
//}
//int main()
//{
//	char c1[2],c2;
//	scanf("%c\n",c1);
//	c2 = c1 + 32;
//	printf("c1=%c\nc2=%c\n", c1, c2);
//	return 0;
//}
//int main()
//{
//	char c1, c2;
//	c1 = 'A';
//	c2 = c1 + 32;
//	printf("c1=%c\nc2=%c\n", c1, c2);
//	return 0;
//}
//int main()
//{
//	char c1 = 'P', c2 = 'H', c3 = 'W';
//	putchar(c1);
//	putchar(c2);
//	putchar(c3);
//	putchar('\n');
//	return 0;
//}
//int main()
//{
//	printf("\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\n");
//	return 0;
//
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//	{
//		printf("%d\n%d\n", a, b);
//	}
//	else
//	{
//		printf("%d\n%d\n", b, a);
//	}
//	return 0;
//} 
//a>b时输出4个答案
//int main()
//{
//	int a, b,t;
//	scanf("%d%d", &a, &b);
//	if (a> b)
//	{
//		t = b;
//		b = a;
//		a = t;
//		printf("a=%d\nb=%d\n", a, b);
//	}
//
//	return 0;
//}
//int main()
//{
//	int a;
//	a > 100 && a < 200;
//
//	return 0;
//}
//100-200素数
//int main()
//{
//	int i;
//	int count=0;
//	for (i = 100; i <=200; i++)
//	{
//		int j;
//		for (j = 2, j <= i - 1; j++;)(为什么需要加；)
//		{
//			if (i%j==0)
//			break;
//		}
//		if (j >= i)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("总数=%d\n", count);
//	return 0;
//}
//1000-2000闰年；
//int main()
//{
//	int i, count=0;
//	for (i =1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//
//	}
//	printf("count=%d", count);
//	return 0;
//}
//计算任意时间段内闰年个数及闰年年份
//int main()
//{
//	int i, count = 0,a,b;
//	printf("输入起始年份并点击enter键\n");
//	scanf("%d", &a);
//	printf("输入终止年份并点击enter键\n");
//	scanf("%d", &b);
//	for (i = a; i <= b; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("count=%d", count);
//	return 0;
//}
//数学乘法口诀表
//int main()
//{
//	int i, J;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			J = i*j;
//			printf("%d*%d=%d  ", j,i,J);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//1-100数字之和/积
//int main()
//{
//	int i, sum = 0;
//	long long J = 1;
//	for (i = 1; i <= 20; i++)
//	{
//		sum = sum+i;
//		J = J*i;
//	}
//	printf("sum=%d\nJ=%lld\n", sum,J);
//	return 0;
//}
//计算任意数字区间的和/积
//int main()
//{
//	int i, sum = 0,a,b;
//	long long J=1;
//	scanf("%d%d", &a, &b);
//	if (b > 20)
//	{
//		printf("数据过大，无法计算乘积\n");
//	}
//	for (i = a; i <= b; i++)
//	{
//		sum = sum + i;
//		J = J*i;
//	}
//	printf("sum=%d\nJ=%lld\n", sum,J);
//	return 0;
//}