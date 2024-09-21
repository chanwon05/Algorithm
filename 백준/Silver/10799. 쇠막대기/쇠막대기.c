#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{
	char stack[100001];
	scanf("%s", stack);
	int size = strlen(stack);
	int cnt = 0;
	int result = 0;

	for (int i = 0; i < size; i++)
	{		
		if (stack[i] == '(')
		{
			cnt++;
		}
		else
		{
			if (stack[i - 1] == '(')
			{
				cnt--;
				result += cnt;
			}
			else
			{
				cnt--;
				result++;
			}
		}		
	}

	printf("%d", result);
		

	return 0;
}