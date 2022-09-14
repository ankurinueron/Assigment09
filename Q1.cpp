#include<stdio.h>   //taking month number and giving no. of days using switch case
int main()
{
    int a;
    printf("Enter the month number (1-12) : ");
    scanf("%d",&a);
    switch(a)
    {
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
        printf("The month consists of 31 days");
        break;
    case 2:
        printf("The month consists of 28 days");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("The month consists of 30 days");
        break;
    default:
        printf("Invalid input");
    }
    return 0;
}
