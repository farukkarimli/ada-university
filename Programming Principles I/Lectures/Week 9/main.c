#include <stdio.h>
#include "stats.h"

int main(void) {

    int scores[MAX_SCORES] = {72, 85, 64, 90, 58, 77};

    int n = 6;

    print_scores(scores, n);

    printf("highest: %d\n", highest(scores, n));

    printf("average: %.2f\n", average(scores, n));

    printf("count above 70: %d\n", count_above(scores, n, 70));

    return 0;

}
