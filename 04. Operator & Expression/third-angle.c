// Write C Program to find the third angle of a right triangle if two other angles are given.
#include <stdio.h>
int main()
{
    int a1, a2;
    printf("Enter Angle First in Deg. : ");
    scanf("%d", &a1);

    printf("Enter Angle Second in Deg. : ");
    scanf("%d", &a2);

    int a3 = 180 - (a1 + a2);

    printf("The Third Angle in Deg. : %d", a3);
}
