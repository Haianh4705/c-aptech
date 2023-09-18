#include <stdio.h>
#include <stdlib.h>

int main() {
    int h; scanf("%d", &h);
    int i, j, space = h - 1;
    for (i = 1; i <= h; i++) {
        for (j = 0; j < space; j++) {
            printf(" ");
        }
        for (j = 0; j < i; j++) {
            printf("* ");
        }
        space--;
        printf("\n");
    }
    return 0;
}
