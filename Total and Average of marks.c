#include <stdio.h>

int main() {
    float marks[5], total = 0, average;
    int i;

    printf("Enter marks of 5 subjects:\n");
    for(i = 0; i < 5; i++) {
        scanf("%f", &marks[i]);
        total += marks[i];   
    }

    average = total / 5;

    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", average);

    return 0;
}

