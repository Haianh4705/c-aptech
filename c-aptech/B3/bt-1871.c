#include <stdio.h>

int main() {
    double a1, b1, c1, a2, b2, c2;
    scanf("%lf %lf %lf %lf %lf %lf", &a1, &b1, &c1, &a2, &b2, &c2);
    /*
    x + 3/2y = 1/2
    x - y = 3
    */
    if (a1 == 0 || a2 == 0) {
        printf("PT vo nghiem hoac vo so nghiem\n");
    } else {
        double hs_b1 = b1 / a1;
        double hs_c1 = c1 / a1;
        double hs_b2 = b2 / a2;
        double hs_c2 = c2 / a2;
        double y = (hs_c1 - hs_c2) / (hs_b1 - hs_b2);
        double x = (c1 - (y * b1)) / a1;

        printf("x: %lf, y: %lf", x, y);
    }
    return 0;
}
