#include <stdio.h>

int main() {
    float units, amount, totalBill;

    printf("Enter total units consumed: ");
    scanf("%f", &units);

    if (units <= 50) {
        amount = units * 0.50;
    }
    else if (units <= 150) {
        amount = (50 * 0.50) + ((units - 50) * 0.75);
    }
    else if (units <= 250) {
        amount = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    }
    else {
        amount = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    // Adding 20% surcharge
    totalBill = amount + (amount * 0.20);

    printf("Electricity Bill = Rs. %.2f\n", totalBill);

    return 0;
}
