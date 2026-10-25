#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    
    srand(time(NULL));

    printf("Let The Game Begin! (cc 'Saw')\n");

    for (int i = 1; i <= 3; i++) {
        int d1 = rand() % 6 + 1;
        int d2 = rand() % 6 + 1; // rand gives a very big number so %6 makes it to fit into 0 to 5 and then adds 1 to extend to 1 to 6

        printf("Chance #%d: %d %d\n", i, d1, d2);

        if (d1 == 6 && d2 == 6) {
            printf("Yeah, I rock at this!\n");
            return 0;
        }
    }

    printf("Ahh, today is just not my day, I guess :(\n");
    return 0;

}