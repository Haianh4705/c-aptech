#include <stdio.h>

int main() {
    int a;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("\n%d %d %d\n", a*a, a*a*a, a*a*a*a);

    int d, m, yy;
    printf("Nhap ngay, thang, nam: ");
    scanf("%d %d %d", &d, &m, &yy);
    printf("\n%d/%d/%d\n", d, m, yy);

    float x, y;
    printf("Nhap x, y: ");
    scanf("%f %f", &x, &y);
    printf("Tong|Hieu|Tich|Thuong: %f %f %f %f", x+y, x-y, x*y, x/y);

    return 0;
}
