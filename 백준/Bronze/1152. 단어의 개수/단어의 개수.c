#include <stdio.h>
#include <string.h>



int main(void)
{
    char str[1000000] = { 0, };
    int count = 1;
    scanf("%[^\n]s", str);


    if (strlen(str) == 1 && str[0] == ' ')
    {
        printf("%d", 0);
        return 0;
    }



    for (int i = 1; i < strlen(str)-1; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }

    



    printf("%d", count);



    return 0;
}