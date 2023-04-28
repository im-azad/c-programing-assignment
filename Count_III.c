#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char str[1001];
    scanf("%s", str);
    int count[26] = {0};
    for (int i = 0; i < strlen(str); i++)
    {
        int value = str[i] - 'a';
        count[value]++;
    }
    for (int i = 0; i < 26; i++)
    {
        int alp= i + 97;
        printf("%c - %d\n", alp, count[i]);
    }

    return 0;
}
