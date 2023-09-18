#include <stdio.h>
#include <stdlib.h>

char BOARD[3][3];

void board();

int main() {
    board();
    return 0;
}

void board() {
    printf(" X | O | O\n");
    printf(" X | O | X\n");
    printf("   | X | O\n");
}
