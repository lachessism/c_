#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



//typedef ����������
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
//1.���ξֲ����� �ֲ��������������򣬲����١��������ڱ䳤���ı��˱����Ĵ洢λ��
//2.����ȫ�ֱ��� ȫ�ֱ������ⲿ�������Ա���ڲ���������
//3.���κ��� �������ⲿ�������Ա���ڲ���������


//void test()
//{
//	//���ξֲ����� static int a = 1;
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


//�����ⲿ����
//extern int g_val;
//
//int main()
//{
//	printf("%d\n, g_val");
//
//	return 0;
//}




//static ���κ���

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
	//�Ĵ�������
	register int num = 3;//���飺3����ڼĴ�����

	return 0;
}