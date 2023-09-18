#include <stdio.h>
#include <stdlib.h>

int main() {
    int to_1, to_2, to_5, tmp;
    int tong = 200;
    int th = 0;

    for (to_5 = 0; to_5 <= 40; to_5++) {
        for (to_2 = 0; to_2 <= 100; to_2++) {
            for (to_1 = 0; to_1 <= 200; to_1++) {
                if (to_1 + to_2 + to_5 == tong) th++;
            }
        }
    }

    printf("So truong hop: %d", th);
    return 0;
}
