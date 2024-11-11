#include <stdio.h>




int main()
{
	int N;
	int head, tail;
	scanf("%d", &N);
	head = 0;
	tail = N - 1;
	int cnt = 0;
	int arr[1000000] = { 0, };

	for (int i = 0; i < N; i++)
	{
		arr[i] = i + 1;
	}

	while (cnt != N - 1)
	{
		head++;
		arr[++tail] = arr[head++];
		cnt++;
	}

	printf("%d", arr[head]);

	

	return 0;
}