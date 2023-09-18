#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // code here
    int m[5][4];

    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
