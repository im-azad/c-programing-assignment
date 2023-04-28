#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char str;
    int sm = 0, cap = 0;
    while (scanf("%c", &str) != EOF)
    {
        if (str >= 'a' && str <= 'z')
        {
            sm++;
        }
        else
        {
            cap++;
        }
    }
    printf("%d %d", cap, sm);

    return 0;
}
