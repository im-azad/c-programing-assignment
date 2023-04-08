#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int numb;
    scanf("%d",&numb);
    if(numb >+ 0) {
        if(numb % 3 == 0) {
            printf("YES");
        }
        else {
             printf("NO");
        }
    }
    return 0;
}
