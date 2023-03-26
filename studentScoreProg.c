#include <stdio.h>

int main()
{

    const int OVERALL_SCORE = 100;

    float testScore;
    float examScore;
    float studentScore;
    float percentageScore;

    printf("Enter your test score\n");
    scanf("%f", &testScore);

    printf("\n");

    printf("Enter your exam score\n");
    scanf("%f", &examScore);

    studentScore = (testScore + examScore);

    percentageScore = (studentScore / OVERALL_SCORE) * OVERALL_SCORE; 


    if(percentageScore >= 40) {
        printf("Student passed with %.1f", percentageScore);
        printf(" percent");

    }
    
    else {
        printf("Student failed with %.1f", percentageScore);
        printf(" percent");
    }

    return 0;
}