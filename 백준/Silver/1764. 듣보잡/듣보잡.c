#include <stdio.h>
#include <stdlib.h>


typedef struct
{
	char arr[21];
}who;

typedef struct
{
	char arr1[21];
}result;

int compare(const who* a, const who* b)
{
	return (strcmp(a->arr, b->arr));
}


who name[1000000];
result ans[500000];


int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n + m; i++)
	{
		scanf("%s", name[i].arr);
	}

	qsort(name, n + m, sizeof(who), compare);

	int idx = 0;
	for (int i = 1; i < n + m; i++)
	{
		if (strcmp(name[i].arr, name[i-1].arr) == 0)
		{
			strcpy(ans[idx++].arr1, name[i].arr);
		}
	}

	printf("%d\n", idx);
	for (int i = 0; i < idx; i++)
	{
		printf("%s\n", ans[i].arr1);
	}




	return 0;
}
