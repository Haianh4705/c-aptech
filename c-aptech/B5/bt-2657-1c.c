#include <stdio.h>
#include <stdlib.h>

int main() {
    int h; scanf("%d", &h);
    int i, j;

    for (i = 1; i <= h; i++) {
        for (j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
