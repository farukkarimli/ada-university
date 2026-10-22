#include <stdio.h>
#include <string.h>

int main() {
    char c[] = "2026";
    int len = strlen(c);   // 4
    int num[len];

    for (int i = 0; i < len; i++)
    {
        num[i] = c[i] - '0';
        printf("%d", num[i]);
    }
   
    return 0;
}