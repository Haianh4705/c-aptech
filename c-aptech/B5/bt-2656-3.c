#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, i; scanf("%d", &num);
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", i, num, i*num);
    }
    return 0;
}
