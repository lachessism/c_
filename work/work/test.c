#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>




//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("�������������֣�");
//	scanf("%d %d", &a, &b);
//
//	while(c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//
//	printf("���Լ��Ϊ%d\n", b);
//
//	return 0;
//}





int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("�������������֣�");
	scanf("%d %d", &a, &b);

	while (1)
	{
		c = a % b;
		a = b;

		if (c == 0)
		{
			printf("���Լ��Ϊ%d\n", b);
			break;
		}
		b = c;
	}

	return 0;
}
