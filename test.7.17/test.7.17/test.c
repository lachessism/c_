#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int b = 20 //全局变量
// 9
//int main()
//{
//	short age = 20;
//	int high = 180;
//	float weight = 88.5;
//	int a = 10//局部变量
//	return 0;
//}



//int a = 100;
// 
//int main()
//{
//	int a = 10;
//	printf("a=%d\n",a);//局部变量优先
//	return 0;
//}





//int main()
//{
//	int num1 = 0;
//	int num2 = 0;//初始化
//
//	//输入两个整数
//	scanf("%d %d", &num1, &num2);
//
//	//求和
//	int sum = num1 + num2;
//
//	//输出
//	printf("%d\n", sum);
//
//	return 0;
//}




//变量的作用域    
//1.局部变量
//局部变量的作用域是变量所在的局部范围
// 
//2.全局变量
//全局变量的作用域是整个工程


//变量生命周期
//局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束

//全局变量的生命周期是：整个程序的生命周期



//声明来自外部的符号
//extern int a;
//
//int a = 10;
//
//
//void test()
//{
//	printf("test-->%d\n", a);
//}
//int main()
//{
//	test();
//	{
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//
//	return 0;
//}





//1.字面常量
//2.const修饰的常变量
//3.define 定义的标识符常量
//4.枚举常量



//int main()
//{
	//30
	//3.14
	//'w';
	//"abc";
//	const int a = 10;//本质是变量，但不能被修改，有常量的属性
//	a = 20;
//	printf("%d\n", a);
//
//	const int n = 10;
//	int arr[10] = { 0 };
//
//	return 0;
//}





//#define MAX 100
//#define STR "abcdef"

//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	printf("%s\n", STR);
//	return 0;
//}




//枚举常量
//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//性别
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	三原色
//	//Red Green Blue
//	int num = 10;
//	enum Color c = RED;
//	return 0;
//}