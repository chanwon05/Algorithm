#include <stdio.h>

int main(void) 
{
	int N;
	char arr[100] = { 0, };
	int sum = 0;
	scanf("%d", &N);
	scanf("%s", arr);

	for (int i = 0; i < N; i++)
	{
		sum += arr[i] - '0';
	}


	printf("%d", sum);


	return 0;
}