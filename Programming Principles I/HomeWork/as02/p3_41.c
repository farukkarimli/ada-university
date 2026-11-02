#include <stdio.h>
#include <math.h>

int main(void) {
    double r;
    printf("Enter the value of radius: ");
    scanf("%lf", &r);

    const double PI = 3.14159;

    double d = 2 * r;
    double c = 2 * PI * r;
    double area = 2 * PI * r * r;

    printf("%.2lf\n%.2lf\n%.2lf\n", d, c, area);

    return 0;
}
    
