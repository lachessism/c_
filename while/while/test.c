#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>






//whileѭ���е�
//break���������õ���ֹѭ��
//continue ��������ѭ������Ĵ��룬ֱ��ȥ�жϲ��֣�������һ��ѭ�����ж�

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (5 == i)
//			continue;
//
//		printf("%d ", i);
//	}
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		
//		if (5 == i)
//			continue;
//		i++;
//
//		printf("%d ", i);
//	}
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//
//		if (5 == i)
//			break;
//		i++;
//
//		printf("%d ", i);
//	}
//	return 0;
//}







//int main()
//{
//	//int ch = getchar();
//	//printf("%c\n", ch);
//	//putchar(ch);
//
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}



//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("��ȷ������(Y/N):>");
//	int ret = getchar();
//
//	if ('Y' == ret)
//		printf("Yes\n");
//	else
//		printf("No\n");
//
//	return 0;
//}




int main()
{
	char ch = '\0';

	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
			continue;

		putchar(ch);
	}
	//ֻ��ӡ�����ַ�

	return 0;
}