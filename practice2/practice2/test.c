#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <string.h>




//int main()
//{
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "#################";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		//�����Ļ
//		system("cls");//system��һ���⺯��,����ִ��ϵͳ����
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}




//�Ƚ�2���ַ����Ƿ���ȣ�����ʹ��==����Ӧ��ʹ��һ���⺯����strcmp
//�������ֵ��0����ʾ2���ַ������
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", password);
		if (strcmp(password, "abcdef") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
	{
		printf("�����������������˳�����\n");
	}
	return 0;
}