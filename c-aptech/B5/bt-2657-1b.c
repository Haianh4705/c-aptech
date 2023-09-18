#include <stdio.h>
#include <stdlib.h>

int main() {
    int h; scanf("%d", &h);
    int i = 1;
    int space = h - 1;
    int space_between = 1;

    int j;
    while (i < h) {
        for (j = 0; j < space; j++) {
            printf(" ");
        }
        if (i == 1) {
            printf("*");
        } else {
            printf("*");
            for (j = 0; j < space_between; j++) {
                printf(" ");
            }
            printf("*");
            space_between += 2;
        }
        printf("\n");
        i++;
        space--;
    }

    for (j = 0; j < h; j++) {
        printf("* ");
    }

    return 0;
}
/*
   *
  * *
 *   *
* * * *
*/
