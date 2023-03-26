#include <stdio.h>

int main()
{

    int firstNumber;
    int secondNumber;
    int smallestNumber;

    printf("Enter first number\n");
    scanf("%d", &firstNumber);

    printf("\n");

    printf("Enter second number\n");
    scanf("%d", &secondNumber);

    smallestNumber = getSmallestValue(firstNumber, secondNumber);

    printf("Smallest number between %d and %d is %d", firstNumber, secondNumber, smallestNumber);

    return 0;
}

int getSmallestValue(int firstNumber, int secondNumber) {
    return (firstNumber < secondNumber) ? firstNumber : secondNumber;
}