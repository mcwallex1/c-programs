#include <stdio.h>

int main()
{
    float price;
    float change;
    float amountPaid;

    printf("Enter Price\n");
    scanf("%f", &price);

    printf("\n");

    printf("Enter Amount paid\n");
    scanf("%f", &amountPaid);

    change = amountPaid - price;

    printf("Change value is %.2f", change);

    return 0;
}