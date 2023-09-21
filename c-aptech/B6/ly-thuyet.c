#include <stdio.h>
#include <stdlib.h>

int main() {
    int t[5] = {1, 2, 3, 4, 5};

    int *ptr = t;
    // dich chuyen con tro den o nho tiep theo
    *ptr++;

    int *p;
    double *q;
    // cap phat vung nho cho mang tinh
    p = (int *) malloc(5 * sizeof(int));
    q = (double *) malloc(5 * sizeof(double));

    // cap phat vung nho cho mang dong
    p = (int *) calloc(5, sizeof(int));
    q = (double *) calloc(5, sizeof(double));

    // thay doi vung nho
    p = (int *) realloc(p, 10 * sizeof(int));
    q = (double *) realloc(q, 10 * sizeof(double));

    free(p);
    free(q);

    return 0;
}
