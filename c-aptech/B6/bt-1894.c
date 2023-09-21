#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; scanf("%d", &n);
    int p[n];

    int i, tmp;
    for (i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    for (i = n-1; i >= 0; i--) {
        printf("%d ", p[i]);
    }
    printf("\n");

    for (i = 0; i < n/2; i++) {
        tmp = p[i];
        p[i] = p[n-1-i];
        p[n-1-i] = tmp;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", p[i]);
    }

    return 0;
}
