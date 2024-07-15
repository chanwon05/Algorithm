#include <stdio.h>




int main(void)
{
    int N, M;
    char arr[51][51];
    int temp1 = 0;
    int temp2 = 0;
    int r = 0;
    int count = 3000;

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        scanf("%s", arr[i]);
    }

    for (int x = 0; x < N - 7; x++)
    {
        for (int y = 0; y < M - 7; y++)
        {
            for (int i = x; i < x + 8; i++)
            {
                for (int j = y; j < y + 8; j++)
                {
                    if ((i - x + j - y) % 2 == 0)
                    {
                        if (arr[i][j] != 'W')
                        {
                            temp1++;
                        }
                    }
                    else
                    {
                        if (arr[i][j] != 'B')
                        {
                            temp1++;
                        }
                    }
                }

            }

            for (int i = x; i < x + 8; i++)
            {
                for (int j = y; j < y + 8; j++)
                {
                    if ((i - x + j - y) % 2 == 0)
                    {
                        if (arr[i][j] != 'B')
                        {
                            temp2++;
                        }
                    }
                    else
                    {
                        if (arr[i][j] != 'W')
                        {
                            temp2++;
                        }
                    }
                }
            }

            if (temp1 < temp2)
            {
                r = temp1;
            }
            else
            {
                r = temp2;
            }
            
            if (r < count)
            {
                count = r;
            }

            temp1 = 0;
            temp2 = 0;

        }
    }


    printf("%d", count);










    return 0;
}