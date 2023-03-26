#include <stdio.h>

int main()
{
    int noOfItems;
    int sum;
    float average;
    int position;

    printf("******NUMBER SERIES PROGRAM******");
    printf("\n\n");

    //Get number of items from the user
    printf("Enter number of numbers\n");
    scanf("%d", &noOfItems);

    printf("\n");

    //Initialize empty array with provided nnumber of items
    int numberSeries[noOfItems];

    /**
     * This for loop prompts the user to enter values until
     * the expected number of items is reached 
     * 
    */
    for (position = 0; position < noOfItems; position++)
    {
        //prompt user to enter next value to be store in the array
        printf("Enter next value\n");

        int currentValue;
        scanf("%d", &currentValue);

        //Store currently entered value to the array
        numberSeries[position] = currentValue;
    }

    /**
     * 
     * For loop to compute the 
     * sum of the values in the array
     * 
    */
    for (position = 0; position < noOfItems; position++)
    {
        //Get value at this position and add to the value of sum
        sum = sum + numberSeries[position];
    }

    //Calculate average using sum from above with total number of items as provided b the user
    average = sum / noOfItems;

    //Display computeation result
    printf("Computation result for\t");

    printf("[");
    for (position = 0; position < noOfItems; position++)
    {
        printf("%d  ", numberSeries[position]);
    }
    printf("]\n\n");

    printf("Sum is %d\n", sum);
    printf("Average is %.2f\n", average);


    return 0;
}

