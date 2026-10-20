#include <stdio.h>

int main() {
    int x, y, z;
    int sameA = 1, sameB = 1, sameC = 1, sameD = 1;

    for (x = 0; x <= 10; x++) {
        for (y = 0; y <= 10; y++) {
            for (z = 0; z <= 10; z++) {

                if ((!(x < 5) && !(y >= 7)) != (!((x < 5) || (y >= 7)))) {
                    sameA = 0;
                }

                if ((!(x == y) || !(z != 5)) != (!((x == y) && (z != 5)))) {
                    sameB = 0;
                }

                if ((!((x <= 8) && (y > 4))) != (!(x <= 8) || !(y > 4))) {
                    sameC = 0;
                }

                if ((!((x > 4) || (y <= 6))) != (!(x > 4) && !(y <= 6))) {
                    sameD = 0;
                }
            }
        }
    }

    if (sameA == 1) printf("a) equivalent\n"); else printf("a) NOT equivalent\n");
    if (sameB == 1) printf("b) equivalent\n"); else printf("b) NOT equivalent\n");
    if (sameC == 1) printf("c) equivalent\n"); else printf("c) NOT equivalent\n");
    if (sameD == 1) printf("d) equivalent\n"); else printf("d) NOT equivalent\n");

    return 0;
}
