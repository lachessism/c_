#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>



//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	
//	strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}




//int main()
//{
//	char arr[20] = "hello world";
//	memset(arr+6, 'y', 3);
//	printf("%s\n", arr);
//
//	return 0;
//}




//�����Ķ���
//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//��ϴ�ֵ
//	//�����ĵ���
//	int m = get_max(a, b);
//
//	printf("%d\n", m);
//
//	return 0;
//}





//��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
//���βε��޸Ĳ���Ӱ��ʵ��

//void swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}



//void swap(int *px , int *py)
//{
//	int z = *px;//z=a
//	*px = *py;//a=b
//	*py = z;//b=a
//}
//
//int main()
//{
//	int a = 0; 
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//����
//	printf("����ǰ:a=%d b=%d\n", a, b);
//
//	//swap(a, b);
//	swap(&a, &b);
//
//	printf("������:a=%d b=%d\n", a, b);
//
//	return 0;
//}




int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)//������������һ����һ������С�ڵ��ڿ�ƽ��
	{
		if (n % j == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i += 2)//����2�����ż������������
	{
		if (is_prime(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);

	return 0;
}