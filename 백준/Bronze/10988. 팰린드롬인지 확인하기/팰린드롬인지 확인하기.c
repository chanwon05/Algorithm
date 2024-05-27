#include <stdio.h>
#include <string.h>


int main(void)
{
	char word[101] = { 0, };
	char str[101] = { 0, };

	scanf("%s", word);

	int size = strlen(word);
	char temp;

	for (int i = 0; i < size; i++)
	{
		temp = word[i];
		word[i] = word[size-1-i];
		word[size-1-i] = temp;

		str[i] = word[i];
	}

	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (str[i] == word[i])
		{
			count++;
		}
	}

	if (count == size)
	{
		printf("1");
	}
	else
		printf("0");
	

	return 0;
}