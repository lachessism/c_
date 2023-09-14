#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>




//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入两个数字：");
//	scanf("%d %d", &a, &b);
//
//	while(c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//
//	printf("最大公约数为%d\n", b);
//
//	return 0;
//}





int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("请输入两个数字：");
	scanf("%d %d", &a, &b);

	while (1)
	{
		c = a % b;
		a = b;

		if (c == 0)
		{
			printf("最大公约数为%d\n", b);
			break;
		}
		b = c;
	}

	return 0;
}
