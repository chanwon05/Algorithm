#include <stdio.h>
#include <string.h>

int main(void)
{
	char temp;
	char A[4];
	char B[4];
	scanf("%s %s", A, B);


	temp = A[0];
	A[0] = A[2];
	A[2] = temp;

	temp = B[0];
	B[0] = B[2];
	B[2] = temp;

	if (strcmp(A,B)>0)
	{
		printf("%s", A);
	}
	else
	{
		printf("%s", B);
	}
		


	return 0;
}