#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int n;
    scanf("%ld", &n);
    if (n > 0)
    {
        if (n > 1000)
        {
            printf("I will buy Punjabi\n");
            n = n - 1000;
            if (n >= 500)
            {
                printf("I will buy new shoes\n");
                printf("Alisa will buy new shoes\n");
            }
        }
        else
        {
            printf("Bad luck!\n");
        }
    }
    return 0;
}

