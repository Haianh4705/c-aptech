#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, so_uoc = 0;
    scanf("%d", &n);
    for (i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (n / i != i) {
                printf("%d %d ", i, n/i);
            } else {
                printf("%d ", i);
            }
        }
    }
    return 0;
}
