#include <stdio.h>
#include <string.h>
int main(void)
{
	char strArr[5][20];
	char temp[20];
	int i, j;
	for (i = 0; i < 5; i++)
	{
		printf("문자열 입력 : ");
		scanf("%s", strArr[i]);
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4 - i; j++)
		{
			if (strlen(strArr[j]) > strlen(strArr[j + 1]))
			{
				strcpy(temp, strArr[j]);
				strcpy(strArr[j], strArr[j + 1]);
				strcpy(strArr[j + 1], temp);
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%s\n", strArr[i]);
	}
	return 0;
}
