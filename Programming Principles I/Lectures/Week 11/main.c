#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct book{
    char title[30];
    int year;
    double price;
};

int main(int argc, char *argv[]){// google how to work with CLI 
    struct book input;

    strcpy(input.title, argv[1]);
    input.year = atoi(argv[2]);
    input.price = atof(argv[3]);

    printf("%s %d %lf", input.title, input.year, input.price);
}



//arg [1] title
//arg [2] year
//arg [3] price 