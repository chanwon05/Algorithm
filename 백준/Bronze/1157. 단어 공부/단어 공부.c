#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[1000000];
    scanf("%s", word);
    int count[26] = { 0 };
    int len = strlen(word);
    
    for (int j = 0; j < len; j++)
    {
        if (word[j] >= 'a' && word[j] <= 'z')
        {
            count[word[j] - 'a'] += 1;
        }
        else if (word[j] >= 'A' && word[j] <= 'Z')
        {
            count[word[j] - 'A'] += 1;
        }
    }

    char n;
    int max = 0;

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            n = 'A' + i;
        }
        else if (count[i] == max)
        {
            n = '?';
        }
    }

    printf("%c\n", n);

    return 0;
}
