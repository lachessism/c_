#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int num = 1;
//	printf("I am a simple computer.\n");
//	printf("My favorite number is %d because it is first.\n",num);
//	return 0;
//}




//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int sum = add(a, b);
//
//	printf("%d\n", sum);
//
//	return 0;
//}





	



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int max = 0;
//	scanf("%d %d %d", &a, &b, &c);
//
//	max = a;
//	if (max < b)
//		max = b;
//
//	if (max < c)
//		max = c;
//	
//	printf("%d\n", max);
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	
//	scanf("%d %d %d", &a, &b, &c);
//
//
//	if (a < b)
//		a = b;
//
//	if (a < c)
//		a = c;
//
//	printf("%d\n", a);
//	return 0;
//}



//
//int main()
//{
//	//int a = 7 / 2;
//	//int b = 7 % 2;//取模
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//
//	float a = 7 / 2.0;
//	printf ("%.1f",a);
//
//	return 0;
//}


//赋值操作符
//int main()
//{
//	int a = 0;
//	a = 20;
//
//	a = a + 3;
//	a += 3;
//
//	a -= 3;
//	a = a - 3;
//
//	return 0;
//}


//int main()
//{
	/*int flag = 2;
	if (!flag)
	{
		printf("hehe\n");
	}*/

	/*int a = -10;
	int b = -a;
	printf("%d\n", b);*/

	/*int a = 10;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);*/

	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));//整个数组的大小,字节
	//printf("%d\n", sizeof(arr[0]));
	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));//数组的元素个数
	
	//int a = 10;
	//int b = a++;//后置++，先使用，后++

	//int b = ++a;//前置++，先++，后使用

	//int a = 10;
	////int b = a--;
	//
	//int b = --a;

	//printf("%d\n", b);
	//printf("%d\n", a);
	
//	int a = (int)3.14;//强制转换类型
//	printf("%d\n", a);
//
//	return 0;
//}




	//int main()
	//{
		//&& 逻辑与 - 并且
		//|| 逻辑或 - 或者

		//int a = 10;
		//int b = 20;
		//if (a && b)
		/*{
			printf("hehe\n");
		}*/
		
		/*int a = 0;
		int b = 20;
		if (a || b)
		{
			printf("hehe\n");
		}
		*/

//三目操作符
// 1的结果为真，则输出2的表达式，如果为假，则输出3的表达式
	//	int a = 10;
	//	int b = 20;

	//	int r = (a > b ? a : b);//
	//	printf("%d\n", r);
	//	return 0;
	//}



//逗号表达式就是逗号隔开的一串表达式
//逗号表达式的特点是：从左向右以此计算，整个表达式的结果是最后一个表达式的结果

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	//       c=8		a=28       c=5
//	int d = (c = a - 2, a = b + c, c - 3);
//	printf("%d\n", d);
//
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	arr[3] = 20;//[]就是下标引用操作符，arr和3就是[]的操作数
//	int a = arr[3];
//
//	printf("%d\n",a);
//	return 0;
//}



//函数调用操作符()
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	
//	int sum = add(a, b);//()就是函数调用操作符，Add,b,都是()的操作数
//
//	printf("%d\n", sum);
//	return 0;
//}





int main()
{
	int a = 0;
	scanf("%d", &a);
	if (a % 5 == 0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	
	}
	return 0;
}