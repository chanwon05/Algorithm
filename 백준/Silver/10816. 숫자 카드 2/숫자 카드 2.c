#include <stdio.h>





int main()
{
    int arr[500000] = { 0 };
    int arr1[500000] = { 0 };
    int positive[10000001] = { 0 };
    int negative[10000000] = { 0 };
    int N, M;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] >= 0)
        {
            positive[arr[i]]++;
        }
        else
        {
            arr[i] = -1 * arr[i];
            negative[arr[i]]++;
        }
    }

    scanf("%d", &M);

    for (int i = 0; i < M; i++)
    {
        scanf("%d", &arr1[i]);
        
         if (arr1[i] >= 0)
        {
            printf("%d ", positive[arr1[i]]);
        }
        else
        {
            arr1[i] = -1 * arr1[i];
            printf("%d ", negative[arr1[i]]);
        }

    }

  

}