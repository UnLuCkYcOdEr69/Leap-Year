#include<stdio.h>
void main()
{
    int year;
    printf("Enter the Year:");
    scanf("%d",&year);

    switch (year%4)
    {
    case 0:
    printf("%d is a leap year",year);
    break;
    
    default:
    printf("%d is not a leap year",year);
        break;
    }

}

