#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, realPart, imaginaryPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        // Two distinct real roots
        float root1 = (-b + sqrt(discriminant)) / (2*a);
        float root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and different.\n");
        printf("Root1 = %.2f\nRoot2 = %.2f\n", root1, root2);
    }
    else if (discriminant == 0) {
        // One real root (both equal)
        float root = -b / (2*a);
        printf("Roots are real and equal.\n");
        printf("Root = %.2f\n", root);
    }
    else {
        // Complex roots
        realPart = -b / (2*a);
        imaginaryPart = sqrt(-discriminant) / (2*a);
        printf("Roots are complex and different.\n");
        printf("Root1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}
