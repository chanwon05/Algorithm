#include <stdio.h>



int main()
{
	int n, k;
	int arr[1000];
	int check[1000] = { 0, };
	int cnt = 0;
	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}

	int idx = k - 1;
	check[idx] = 1;
	int flag = 1;
	printf("<%d", arr[k - 1]);

	while (flag < n)
	{
		if (check[idx] == 0)
		{
			cnt++;
		}
		if (cnt == k)
		{
			printf(", %d", arr[idx]);
			check[idx] = 1;
			cnt = 0;
			flag++;
		}

		idx = (idx + 1) % n;
	}

	printf(">");

	return 0;
}
