#include <stdio.h>



int main()
{
	int a, b, c;
	int tmp;
	
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0)
		{
			break;
		}

		if (a >= b && a >= c)
		{
			tmp = a;
			a = c;
			c = tmp;
		}
		else if (b >= a && b >= c)
		{
			tmp = b;
			b = c;
			c = tmp;		
		}

		if (a * a + b * b == c * c)
		{
			printf("right\n");
		}
		else
		{
			printf("wrong\n");
		}

	}
	

	return 0;
}