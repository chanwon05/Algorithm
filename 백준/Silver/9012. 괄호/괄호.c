#include <stdio.h>
#include <string.h>



int main(void)
{
    int N;
    int count;
    char str[51];
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%s", str);
        count = 0;
        int size = strlen(str);
        for (int j = 0; j < size; j++)
        {
            if (str[j] == '(')
            {
                count++;
            }
            else
            {
                count--;
            }
            if (count < 0)
            {
                printf("NO\n");
                break;
            }
            
        }

        if (count == 0)
        {
            printf("YES\n");
        }
        else if(count > 0)
        {
            printf("NO\n");
        }

                          
    }
 

    
    return 0;
}