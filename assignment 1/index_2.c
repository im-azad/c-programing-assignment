#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int a, b;
    scanf("%ld %ld", &a, &b);
    long long int c = a * b;
    printf("%lld", c);
    return 0;
}
