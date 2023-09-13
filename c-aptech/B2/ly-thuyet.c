#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // xoa buffer de dung ham getchar
    fflush(stdin); fflush(stdout);
    // can le string
    char str[20] = "Hello World";
    printf("|                   |\n");
    printf("%20s\n", str);
    printf("%-20s", str);
    return 0;
}
