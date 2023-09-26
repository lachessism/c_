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




//函数的定义
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
//	//求较大值
//	//函数的调用
//	int m = get_max(a, b);
//
//	printf("%d\n", m);
//
//	return 0;
//}





//当实参传递给形参的时候，形参是实参的一份临时拷贝
//对形参的修改不会影响实参

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
//	//交换
//	printf("交换前:a=%d b=%d\n", a, b);
//
//	//swap(a, b);
//	swap(&a, &b);
//
//	printf("交换后:a=%d b=%d\n", a, b);
//
//	return 0;
//}




int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)//不是素数的数一定有一个因数小于等于开平方
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
	for (i = 101; i <= 200; i += 2)//除了2以外的偶数都不是素数
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