#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; scanf("%d", &n);
    int t[n];

    int i, j;
    for (i = 0; i < n; i++) {
        scanf("%d", &t[i]);
    }

    int max;
    for (i = 0; i < n; i++) {
        max = t[i];
        for (j = i + 1; j < n; j++) {
            if (max < t[j]) {
                max = t[j];
                t[j] = t[i];
                t[i] = max;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d ", t[i]);
    }

    return 0;
}
