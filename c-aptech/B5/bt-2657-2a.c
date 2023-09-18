#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
