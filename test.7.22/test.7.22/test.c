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
//	//int b = 7 % 2;//ȡģ
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//
//	float a = 7 / 2.0;
//	printf ("%.1f",a);
//
//	return 0;
//}


//��ֵ������
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
	//printf("%d\n", sizeof(arr));//��������Ĵ�С,�ֽ�
	//printf("%d\n", sizeof(arr[0]));
	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));//�����Ԫ�ظ���
	
	//int a = 10;
	//int b = a++;//����++����ʹ�ã���++

	//int b = ++a;//ǰ��++����++����ʹ��

	//int a = 10;
	////int b = a--;
	//
	//int b = --a;

	//printf("%d\n", b);
	//printf("%d\n", a);
	
//	int a = (int)3.14;//ǿ��ת������
//	printf("%d\n", a);
//
//	return 0;
//}




	//int main()
	//{
		//&& �߼��� - ����
		//|| �߼��� - ����

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

//��Ŀ������
// 1�Ľ��Ϊ�棬�����2�ı��ʽ�����Ϊ�٣������3�ı��ʽ
	//	int a = 10;
	//	int b = 20;

	//	int r = (a > b ? a : b);//
	//	printf("%d\n", r);
	//	return 0;
	//}



//���ű��ʽ���Ƕ��Ÿ�����һ�����ʽ
//���ű��ʽ���ص��ǣ����������Դ˼��㣬�������ʽ�Ľ�������һ�����ʽ�Ľ��

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
//	arr[3] = 20;//[]�����±����ò�������arr��3����[]�Ĳ�����
//	int a = arr[3];
//
//	printf("%d\n",a);
//	return 0;
//}



//�������ò�����()
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
//	int sum = add(a, b);//()���Ǻ������ò�������Add,b,����()�Ĳ�����
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