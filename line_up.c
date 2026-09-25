#include <stdio.h>
int main(void)
{
	int i, j, temp;
	int num[10];


	for (i = 0; i < 10; i++)
	{
		printf("정수 10개 입력 : ");
		scanf("%d", &num[i]);
	}

	printf("정렬 후 : ");

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			if (num[j] > num[j + 1])
			{
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", num[i]);
	}
	return 0;
}
