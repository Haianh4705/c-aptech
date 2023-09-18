#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int i, j, k, space = n - 2;
    for (i = 1; i <= m; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 || i == m) {
                printf("*");
            } else {
                printf("*");
                for (k = 0; k < space; k++) {
                    printf(" ");
                }
                printf("*");
                break;
            }
        }
        printf("\n");
    }
    return 0;
}
