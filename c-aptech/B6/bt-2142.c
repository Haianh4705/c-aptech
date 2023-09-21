#include <stdio.h>
#include <stdlib.h>

const int MAX_SIZE = 100;

int main() {
    int *dataList;
    int dataSize = 1;
    dataList = (int *) calloc(dataSize, sizeof(int));

    // printf("%d", sizeof(dataList));

    int input, run = 1;
    while (run) {
        system("cls");
        printf("1. Nhap\n");
        printf("2. Sap xep\n");
        printf("3. Tim kiem\n");
        printf("4. Xoa\n");
        printf("5. Hien thi\n");
        printf("6. Thoat\n");
        scanf("%d", &input);

        switch (input) {
            case 1:
                system("cls");
                printf("Nhap x: ");
                scanf("%d", &input);
                dataSize++;
                dataList = (int *) realloc(dataList, dataSize * sizeof(int));
                dataList[dataSize - 1] = input;
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                system("cls");
                for (input = 0; input < dataSize; input++) {
                    printf("%d ", dataList[input]);
                }
                printf("\n");
                scanf("%d", &input);
                break;
            case 6:
                run = 0;
                break;
            default:
                continue;
        }
    }

    free(dataList);

    return 0;
}
