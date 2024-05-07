#include <stdio.h>

int main(void) 
{
	char ch[100];

	scanf("%s",&ch);

	int count = 0;

	for (int i = 0; ch[i]!= '\0'; i++)
	{
		count++;
	}

	printf("%d", count);




	return 0;

}