#include <stdio.h>

const float PI = 3.14;

int main() {
    float a, b;
    printf("Nhap a, b: ");
    scanf("%f %f", &a, &b);
    printf("dien tich: %f, chu vi: %f\n", a*b, (a+b)*2);

    float r;
    printf("Nhap ban kinh: ");
    scanf("%f", &r);
    printf("chu vi: %f, dien tich: %f\n", r*PI*2, r*PI*PI);

    int n;
    long long S;
    printf("Nhap N: ");
    scanf("%d", &n);
    S = (n+1)*n/2;
    printf("%ld", S);

    return 0;
}
