#include <stdio.h>

int main() {
    int n;
    double tong = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    //b1
    int cnt = 1;
    while (cnt <= n) {
        tong += cnt;
        cnt++;
    }
    //b2
    // int cnt = 1;
    // while (cnt <= n) {
    //     tong += cnt * cnt;
    //    cnt++;
    // }
    //b3
    // int cnt = 1;
    // while (cnt <= n) {
    //     tong += 1/cnt;
    //    cnt++;
    // }
    //b4
    // int cnt = 0;
    // while (cnt <= n) {
    //     tong += 1/(2*n+1);
    //    cnt++;
    // }

    printf("Tong: %lf", tong);
    return 0;
}