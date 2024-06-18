#include <stdio.h>
#include <string.h>


int main()
{
	int N;
	scanf("%d", &N);

	char str[101];
	int index;
	int group = 0;
	

	for (int i = 0; i < N; i++)
	{
		scanf("%s", str);

		int alpha[26] = { 0, };

		int is_group=1;

		int size = strlen(str);
		
		for (int j = 0; j < size; j++)
		{
			index = str[j]-'a';

			if (alpha[index] == 0)
			{
				alpha[index] = 1;
			}
			else
			{
				if (str[j - 1] != str[j])
				{
					is_group = 0;
					break;
				}
			}
		}

		if (is_group)
		{
			group++;
		}

	}

		
	printf("%d\n", group);



	return 0;
}