#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>








//��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε� һ����ʱ����
//���βε��޸Ĳ��ܸı�ʵ��
//void swap(int *px, int *py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int c = add(a, b);
//	printf("%d\n", c);
//
//	printf("����ǰ:a=%d b=%d\n", a, b);
//	
//	swap(&a, &b);
//
//	printf("������:a=%d b=%d\n", a, b);
//
//	return 0;
//}







// 
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�������ʹ�ӡ
//		//��2~i-1֮�������ȥ�Գ�i
//		int flag = 1;//flag��1����ʾ������
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}






//sqrt����ѧ�⺯��
// ��ƽ��
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�������ʹ�ӡ
//		//��2~i-1֮�������ȥ�Գ�i
//		int flag = 1;//flag��1����ʾ������
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//������������һ����һ������С�ڵ��ڿ�ƽ��
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}







//sqrt����ѧ�⺯��
// ��ƽ��
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)//����2�����ż������������
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�������ʹ�ӡ
//		//��2~i-1֮�������ȥ�Գ�i
//		int flag = 1;//flag��1����ʾ������
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//������������һ����һ������С�ڵ��ڿ�ƽ��
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}








//дһ���������ж�һ�����ǲ�������
//����������1
//������������0
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)//������������һ����һ������С�ڵ��ڿ�ƽ��
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)//����2�����ż������������
//	{
//		if (is_prime(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}