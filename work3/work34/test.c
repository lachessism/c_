#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//���100-200֮�������
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







// ��������ÿ�õ�һ�����ݣ�ֻ��Ҫ����䣺[2, i/2]�������Ƿ���Ԫ�ؿ��Ա�2i�������ɣ�����˵��i��������

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




