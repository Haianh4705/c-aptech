#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i;
    char str[100];
    char s1[10];
    char s2[10];

    printf("Nhap chuoi: ");
    scanf("%s", str);
    printf("Do dai chuoi: %d\n", strlen(str));
    printf("Nhap chuoi s1 s2: ");
    scanf("%s %s", s1, s2);
    strcat(s1, s2);
    printf("Noi chuoi s2 vao s1: %s\n", s1);
    printf("Nhap chuoi: ");
    scanf("%s", str);
    for (i = 0; i < strlen(str); i++) {
        printf("%c\n", str[i]);
    }
    return 0;
}
