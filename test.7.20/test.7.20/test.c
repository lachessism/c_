#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	printf("abc\n");//\n����
//
//	return 0;
//}


//int main()
//{
//	printf("abc\0def");
//
//	return 0;
//}

//ת���ַ�
//����ĸ��
// \?
//??) --> ]
//??( --> [

//int main()
//{
//	printf("%s\n", "(are you ok\?\?)"); \?ת��Ϊ�ַ�����?
//	(are you ok]
//	printf("%c\n", '\'');  \'ת��Ϊ�ַ����� '
	//printf("abcdef\n");
	//printf("\""); \" ת��Ϊ�ַ�����"

	//printf("abcd\\0ef"); \\ ת��Ϊ�ַ�����\

	//printf("\a"); \a ��������

	//printf("%c\n", '\130'); \ddd ��ʾ3���˽������֣����Ϊʮ���ƶ�Ӧ��ASCII��
	//printf("%c\n", '\x63'); \xdd ��ʾ2��ʮ���������֣����Ϊʮ���ƶ�Ӧ��ASCII��

	//printf("%d\n", strlen("qwer t"));
	//printf("%d\n", strlen("c:\test\628\test.c"));
	//return 0;
	
//}



//%d - ��ӡ����
//%c - ��ӡ�ַ�
//%s - ��ӡ�ַ���
//%f - ��ӡfloat���͵�����
//%lf - ��ӡdouble���͵�����
//%zu - ��ӡsizeof�ķ���ֵ





//ע��

/* c���Ե�ע�ͷ��
int main()
{
	int a = 10;
	int b = 20;

	return 0;
}
*/

//int main()
//{
	1234567890-=*****++��ע�ͷ��
//	return 0;
//}







//ѡ�����

//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("Ҫ�ú�ѧϰ��(1/0)?");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//}




int main()
{
	int line = 0;
	printf("�������\n");

	while (line < 20000)
	{
		printf("д����:%d\n", line);
		line++;
	}
	if (line >= 20000)
	{
		printf("��offer\n");
	}
	else
	{
		printf("��������\n");
	}

	return 0;
}