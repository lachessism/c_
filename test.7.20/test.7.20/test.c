#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	printf("abc\n");//\n换行
//
//	return 0;
//}


//int main()
//{
//	printf("abc\0def");
//
//	return 0;
//}

//转义字符
//三字母词
// \?
//??) --> ]
//??( --> [

//int main()
//{
//	printf("%s\n", "(are you ok\?\?)"); \?转义为字符常量?
//	(are you ok]
//	printf("%c\n", '\'');  \'转义为字符常量 '
	//printf("abcdef\n");
	//printf("\""); \" 转义为字符常量"

	//printf("abcd\\0ef"); \\ 转义为字符常量\

	//printf("\a"); \a 触发蜂鸣

	//printf("%c\n", '\130'); \ddd 表示3个八进制数字，输出为十进制对应的ASCII码
	//printf("%c\n", '\x63'); \xdd 表示2个十六进制数字，输出为十进制对应的ASCII码

	//printf("%d\n", strlen("qwer t"));
	//printf("%d\n", strlen("c:\test\628\test.c"));
	//return 0;
	
//}



//%d - 打印整形
//%c - 打印字符
//%s - 打印字符串
//%f - 打印float类型的数据
//%lf - 打印double类型的数据
//%zu - 打印sizeof的返回值





//注释

/* c语言的注释风格
int main()
{
	int a = 10;
	int b = 20;

	return 0;
}
*/

//int main()
//{
	1234567890-=*****++的注释风格
//	return 0;
//}







//选择语句

//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("要好好学习吗(1/0)?");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//	return 0;
//}




int main()
{
	int line = 0;
	printf("加入比特\n");

	while (line < 20000)
	{
		printf("写代码:%d\n", line);
		line++;
	}
	if (line >= 20000)
	{
		printf("好offer\n");
	}
	else
	{
		printf("继续加油\n");
	}

	return 0;
}