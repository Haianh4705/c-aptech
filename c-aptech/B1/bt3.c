#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // b1
    printf("1)\n");
    printf("*\n");
    printf("**\n");
    printf("***\n");
    printf("****\n");
    printf("*****\n");

    //b2
    printf("2)\n");
    printf("===================================\n");
    printf("| STT | Ho Ten | Tuoi | Gioi Tinh |\n");
    printf("|01   | Nguyen A | 20 | Nam       |\n");
    printf("|02   | Nguyen B | 22 | Nam       |\n");
    printf("|03   | Nguyen C | 26 | Nam       |\n");

    //b3
    printf("3)\n");
    int a,b,c,d;
    a = 1; b = 2; c = 3;
    d = 10*a*a + 5*b*c + c*c;
    printf("%d", d);
    return 0;
}
