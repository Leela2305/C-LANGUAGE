#include <stdio.h>
#include <math.h>  

int main() {
    double principal, rate, time;
    double simpleInterest, compoundInterest;

    
    printf("Enter Principal amount: ");
    scanf("%lf", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%lf", &rate);

    printf("Enter Time (in years): ");
    scanf("%lf", &time);

    
    simpleInterest = (principal * rate * time) / 100.0;

    
    compoundInterest = principal * (pow((1 + rate / 100.0), time)) - principal;

    
    printf("\nSimple Interest = %.2lf\n", simpleInterest);
    printf("Compound Interest = %.2lf\n", compoundInterest);

    return 0;
}

