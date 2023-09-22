#include <stdio.h>
#include <stdlib.h>

int giaithua(int n) {
    int gt = 1;
    int i;
    for (i = n; i > 1; i--) {
        gt *= i;
    }
    return gt;
}

int tong(int m) {
    return m*(m + 1)/2;
}

int main() {
    printf("Giai thua 5: %d\n", giaithua(5));
    printf("Tong 1-10: %d\n", tong(10));
    return 0;
}
