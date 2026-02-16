#include <stdio.h>

int main() {
    int a, b, c, biggest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    
    biggest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("The biggest number is %d\n", biggest);

    return 0;
}

