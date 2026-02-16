#include <stdio.h>
#include <math.h>  

int main() {
    double num, result;

    
    printf("Enter a number: ");
    scanf("%lf", &num);

    
    if (num < 0) {
        printf("Square root of a negative number is not defined in real numbers.\n");
    } else {
        result = sqrt(num);  
        printf("Square root of %.2lf = %.2lf\n", num, result);
    }

    return 0;
}

