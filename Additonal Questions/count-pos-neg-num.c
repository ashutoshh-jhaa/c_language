/*count the number of the positive and negative numbers */
#include <stdio.h>

int main()
{
    int num, positiveCount = 0, negativeCount = 0;

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; ++i)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (num > 0)
        {
            positiveCount++;
        }
        else if (num < 0)
        {
            negativeCount++;
        }
    }

    printf("\nNumber of positive numbers: %d\n", num);
    printf("Number of negative numbers: %d\n", negativeCount);

    return 0;
}
