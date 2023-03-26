#include <stdio.h>

int main()
{
    /* code */
    // printf("Hello");

    int first = 80;
    int second = 10;

    int numbers[10];

    numbers[0] = first;
    numbers[1] = second;

    for (int i = 2; i <= 10; i++)
    {
        int previous = numbers[(i) - 2];

        if(((i) % 2) == 0) {
            
            int newValue = previous - 10;
            numbers[i] = newValue;

        }
        else {

            int newValue = previous + 5;
            numbers[i] = newValue;
        }
    }

    //Counted loop using for statement
    printf("FOR COUNTED LOOP\n");
   
   for (int j = 0; j < 10; j++) {
     printf("%d\t", numbers[j]);
   }

   printf("\n\n");

    //POST test loop using do..while
    printf("FOR POST TEST LOOP\n");

    int j = 0;

    do
    {
        printf("%d\t", numbers[j]);
        j++;

    } while (j < 10);
    

   printf("\n\n");

    //PRE test loop using do..while
    printf("FOR PRE TEST LOOP\n");

    j = 0;

    while (j < 10)
    {
        printf("%d\t", numbers[j]);
        j++;
    }
    
   
    

    return 0;
}
