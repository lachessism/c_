#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>







//���ֲ���
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10 };
	int num = 0;
	scanf("%d", &num);

	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (num > arr[mid])
		{
			left = mid + 1;
		}
		else if (num < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ��±���%d\n", mid);
			break;
		}

		if (left > right)
		{
			printf("�Ҳ���");
		}
	}
	return 0;
}




