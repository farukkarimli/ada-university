#include <stdio.h>

int main(void){
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if(age < 6){
        puts("free ticket");
    }else if(age >= 18){
        puts("Adult ticket");
    }else{
        puts("Student ticket");
    }
    return 0;
}    