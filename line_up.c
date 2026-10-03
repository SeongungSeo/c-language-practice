#include <stdio.h>
int main()
{
	int n, i, sum = 0, sumsum = 0;

	printf("정수 입력 : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 1)
			sum += i;
		else
			sumsum += i;
	}
	printf("짝수 총합 : %d\n", sumsum);
	printf("홀수 총합 : %d\n", sum);
	return 0;
}
