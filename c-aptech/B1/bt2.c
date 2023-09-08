#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a = 10;
    int b = 10;
    int c = 10;
    int d = 10;
    int e = 10;
    int f = 10;

    int x = a*a*a*a*a*a + b*c*d + e*f;
    int y = (a*a*a) * (b*b) + a*b*d*e*f;

    printf("%d, %d", x, y);

    return 0;
}
