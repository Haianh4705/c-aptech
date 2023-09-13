#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double d = b*b - 4*a*c;
    if (d < 0) printf("PT vo nghiem\n");
    else if (d == 0) printf("PT co nghiem kep: %lf\n", -b/(2*a));
    else printf("PT co 2 nghiem: x1 = %lf, x2 = %lf", (-b+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a));
    return 0;
}
