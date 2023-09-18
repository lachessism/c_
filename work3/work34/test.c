#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//输出100-200之间的素数
//int main()
//{
//	int n = 0;
//	
//	int count = 0;
//
//	for (n = 101; n<=200;n++)
//	{
//		int i = 2;
//		for (i = 2; 2 <= i < n; i++)
//		{
//			if (n % i == 0)
//			{
//				break;
//			}
//		}
//		if (n == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//
//	}
//
//	printf("\ncount = %d\n", count);
//	return 0;
//}







// 方法二：每拿到一个数据，只需要检测其：[2, i/2]区间内是否有元素可以被2i整除即可，可以说明i不是素数

int main()
{
	int n = 0;
	int count = 0;

	for (n = 101; n <= 200; n++)
	{
		int i = 0;
		for (i = 2; i <= n / 2; i++)
		{
			if (n % i == 0)
			{
				break;
			}
		}
		if (i > n / 2)
		{
			count++;
			printf("%d ", n);
		}
	}
	printf("\ncount = %d\n", count);

	return 0;
}




