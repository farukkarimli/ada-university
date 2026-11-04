#include <stdio.h>

void print_rectangle(int w, int l){
    for(int i = 1; i <= w; i++){
        for(int j = 1; j <= l; j++){
            printf("*");
        }
        puts("");
    }
}

int main(void){
    print_rectangle(6, 3);
    return 0;
}