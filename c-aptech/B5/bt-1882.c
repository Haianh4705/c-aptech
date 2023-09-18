#include <stdio.h>
#include <stdlib.h>

void menu();

int main() {
    int input = 0;
    while (input != 3) {
        menu();
        fflush(stdin); fflush(stdout);
    }
    return 0;
}

void menu() {
    system("cls");
    printf("1. Nhap thong tin sinh vien\n");
    printf("2. Hien thi thong tin sinh vien\n");
    printf("3. Ket thuc chuong trinh\n");
}
