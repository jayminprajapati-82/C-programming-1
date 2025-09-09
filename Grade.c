#include <stdio.h>

int main() 
{
    int sub1, sub2, sub3, total;
    float average;
    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);

    if (sub1 < 35 || sub2 < 35 || sub3 < 35) {
        printf("Result: Fail\n");
    } else {
        total = sub1 + sub2 + sub3;
        average = total / 3.0;

        printf("Total = %d\n", total);
        printf("Average = %.2f\n", average);
        if (average >= 70)
            printf("Grade: Distinction\n");
        else if (average >= 60)
            printf("Grade: First Class\n");
        else if (average >= 50)
            printf("Grade: Second Class\n");
        else if (average >= 35)
            printf("Grade: Third Class\n");
        else
            printf("Result: Fail\n");
    }

    return 0;
}
