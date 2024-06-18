#include <stdio.h>
#include <string.h>



int main()
{
	char alpha[100];
	scanf("%s", alpha);

	int size = strlen(alpha);

	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if ( (alpha[i] == 'c') && (alpha[i+1] == '=') )
		{
			count++;
			i += 1;
		}
		else if ((alpha[i] == 'c') && (alpha[i + 1] == '-'))
		{
			count++;
			i += 1;
		}
		else if ((alpha[i] == 'd') && (alpha[i + 1] == 'z')&&(alpha[i+2]=='='))
		{
			count++; 
			i += 2;
		}
		else if ((alpha[i] == 'd') && (alpha[i + 1] == '-'))
		{
			count++;
			i += 1;
		}
		else if ((alpha[i] == 'l') && (alpha[i + 1] == 'j'))
		{
			count++;
			i += 1;
		}
		else if ((alpha[i] == 'n') && (alpha[i + 1] == 'j'))
		{
			count++;
			i += 1;
		}
		else if ((alpha[i] == 's') && (alpha[i + 1] == '='))
		{
			count++;
			i += 1;
		}
		else if ((alpha[i] == 'z') && (alpha[i + 1] == '='))
		{
			count++;
			i += 1;
		}
		else 
		{
			count++;
		}

	}


	printf("%d", count);






	return 0;
}