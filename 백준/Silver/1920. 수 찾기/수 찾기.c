#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const int* a, const int* b)
{
	if (*a > *b)
	{
		return 1;
	}
	else if (*a < *b)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

int find(int arr[], int key, int size)
{
	int front = 0;
	int rear = size - 1;

	while(front <= rear)
	{
		int pivot = (front + rear) / 2;

		if (arr[pivot] == key)
		{
			return 1;
		}

		if (arr[pivot] < key)
		{
			front = pivot + 1;
		}
		else
		{
			rear = pivot - 1;
		}
	
    }

	return 0;
}

int main()
{
	int n;
	scanf("%d", &n);

	int* A = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
	int m;
	scanf("%d", &m);

	int* M = (int*)malloc(m * sizeof(int));


	for (int i = 0; i < m; i++)
	{
		scanf("%d", &M[i]);
	}

	qsort(A, n, sizeof(int), compare);

	for (int i = 0; i < m; i++)
	{
		printf("%d\n", find(A, M[i], n));
	}

	free(A);
	free(M);

	
	return 0;
}