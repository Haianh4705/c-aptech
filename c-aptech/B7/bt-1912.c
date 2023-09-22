#include <stdio.h>
#include <stdlib.h>

int main() {

    int *t;
    int input, i, n, tong, tmp, j;
    int run = 1;

    while (run) {
        // system("cls");
        printf("1. Nhap N so nguyen\n");
        printf("2. Hien thi\n");
        printf("3. Tinh tong cac phan tu\n");
        printf("4. Sap xep theo thu tu tang dan\n");
        printf("5. Thoat\n");

        scanf("%d", input);

        switch (input) {
            case 1:
                printf("Nhap N: ");
                scanf("%d", &n);
                t = (int *) calloc(n, sizeof(int));
                for (i = 0; i < n; i++) {
                    scanf("%d", &t[i]);
                }
                break;
            case 2:
                for (i = 0; i < n; i++) {
                    printf("%d ", t[i]);
                }
                printf("\n");
                break;
            case 3:
                for (i = 0; i < n; i++) {
                    tong += t[i];
                }
                printf("Tong: %d\n", tong);
                break;
            case 4:
                for (i = 0; i < n; i++) {
                    for (j = i + 1; j < n; j++) {
                        if (t[j] < t[i]) {
                            tmp = t[i];
                            t[i] = t[j];
                            t[j] = tmp;
                        }
                    }
                }
                break;
            case 5:
                run = 0;
                break;
            default:
                continue;
                break;
        }
        scanf("%d", &input);
    }

    return 0;
}
