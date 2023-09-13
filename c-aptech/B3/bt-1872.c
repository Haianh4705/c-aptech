#include <stdio.h>

int main() {
    int a1, a2, a3, a4;
    scanf("%d %d %d %d", &a1, &a2, &a3, &a4);
    int max = a1;
    int min = a1;

    if (max < a2) max = a2;
    if (max < a3) max = a3;
    if (max < a4) max = a4;

    if (min > a2) min = a2;
    if (min > a3) min = a3;
    if (min > a4) min = a4;

    printf("So lon nhat: %d\n", max);
    printf("So nho nhat: %d", min);

    return 0;
}
