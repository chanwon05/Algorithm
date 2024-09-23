#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
	char n[6];
	char compare[6];
	while (1)
	{
		scanf("%s", n);
		int size = strlen(n);
		int cnt = 0;
		if (n[0] == '0')
		{
			break;
		}

		int i = 0;
		for (int j = size - 1; j >= 0; j--)
		{
			compare[i] = n[j];
			i++;
		}
			
		for (int i = 0; i < size; i++)
		{
			if (compare[i] == n[i])
			{
				cnt++;
			}
		}
		if (cnt == size)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}

	}
	

	
}