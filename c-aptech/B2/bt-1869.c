#include <stdio.h>
#include <string.h>

int main() {
    char rollno[16];
    int age;
    char name[50];
    char address[200];

    printf("Nhap ma SV, tuoi, ho ten, dia chi: ");

    fgets(rollno, 16, stdin);
    rollno[strlen(rollno) - 1] = '\0';

    scanf("%d", &age);
    scanf("%s", &name);
    fflush(stdin); fflush(stdout);

    fgets(address, 16, stdin);
    address[strlen(address) - 1] = '\0';

    char ten[10] = "Ten";
    char tuoi[10] = "Tuoi";
    char masv[10] = "Ma SV";
    char diachi[10] = "Dia chi";

    printf("=====================================================================\n");
    printf("|%-20s|%s|%-20s|%-20s|\n", ten, tuoi, masv, diachi);
    printf("=====================================================================\n");
    printf("|%-20s|%d  |%-20s|%-20s|", rollno, age, name, address);

    return 0;
}
