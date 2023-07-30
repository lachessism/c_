#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



//typedef 类型重命名
// 
//typedef unsigned int uint;
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	unsigned int num = 0;
//	uint num2 = 1;
//	struct Node n;
//	Node n2;
//
//	return 0;
//}




//static
//1.修饰局部变量 局部变量出了作用域，不销毁。生命周期变长，改变了变量的存储位置
//2.修饰全局变量 全局变量的外部链接属性变成内部链接属性
//3.修饰函数 函数的外部链接属性变成内部链接属性


//void test()
//{
//	//修饰局部变量 static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//声明外部符号
//extern int g_val;
//
//int main()
//{
//	printf("%d\n, g_val");
//
//	return 0;
//}




//static 修饰函数

//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int z = Add(a, b);
//
//	printf("%d\n", z);
//
//	return 0;
//}



int main()
{
	//寄存器变量
	register int num = 3;//建议：3存放在寄存器中

	return 0;
}