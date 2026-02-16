#include <stdio.h>
#include <math.h>  
int main() {
    double radius, area;

    printf("Enter radius of the circle: ");
    scanf("%lf", &radius);

    area = M_PI * radius * radius;  
    printf("Area of Circle = %.2lf\n", area);

    return 0;
}
