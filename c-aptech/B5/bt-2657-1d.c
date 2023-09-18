#include <stdio.h>
#include <stdlib.h>

int main() {
    int h; scanf("%d", &h);
    int i, j, space = 1;

    for (i = 1; i < h; i++) {
        if (i == 1) {
            printf("*");
        } else {
            printf("*");
            for (j = 0; j < space; j++) {
                printf(" ");
            }
            printf("*");
            space += 2;
        }
        printf("\n");
    }

    for (j = 0; j < h; j++) {
        printf("* ");
    }
    return 0;
}
/*
*
* *
*   *
* * * *
*/
