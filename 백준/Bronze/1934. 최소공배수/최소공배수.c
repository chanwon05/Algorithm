#include <stdio.h>

int gcd(int a, int b)
{
	int n;
	while (b != 0)
	{
		n = a % b;
		a = b;
		b = n;
	}
	return a;
}


int main()
{
	int T;
	scanf("%d", &T);
	int a, b;

	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", (a * b) / gcd(a, b));
	}

	return 0;
}