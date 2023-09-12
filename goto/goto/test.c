#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



//goto语句
//int main()
//{
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//
//	return 0;
//}




//关机程序
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在60秒后关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}





//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	
//	while(1)
//	{
//	printf("请注意，你的电脑将在60秒后关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);	
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		break;
//	}
//	return 0;
//}