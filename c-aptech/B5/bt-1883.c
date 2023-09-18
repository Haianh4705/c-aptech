#include <stdio.h>
#include <stdlib.h>

int main() {
    int max; scanf("%d", &max);
    int a, b, tmp;
    a = 1; b = 1;
    printf("1 ");
    
    while (b < max) {
        printf("%d ", b);
        tmp = a + b;
        a = b;
        b = tmp;
    }
    return 0;
}
