#include <stdio.h>
#include <stdlib.h>

void showMessage(int msg) {
    printf("Hello %d\n", msg);
}

int main() {

    showMessage(1);
    showMessage(2);
    showMessage(3);
    return 0;
}
