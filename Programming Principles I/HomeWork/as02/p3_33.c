#include <stdio.h>

int main(void) {
    int a;
    printf("Enter the side value between 1 and 20: ");
    scanf("%d", &a);

    while(a < 1 || a > 20){
        printf("Invalid input, enter again: ");
        scanf("%d", &a);
    }

    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= a; j++){
            if(i == 1 || i == a || j == 1 || j == a){
            printf("*");
            }else{
                printf(" ");
            }
        }
        puts("");
    }
}
