#include<stdio.h>
int main()
{
    int year;
    printf("Please enter the year in YYYY format : ");
    scanf("%d",&year);
    switch(year%100==0)
    {
        case 0: switch(year%400==0)
        {
            case 1:
            printf("It is a leap year");
            break;
            case 0:
            printf("It is not a leap year");
            break;
        }
        break;
        case 1: switch(year%4==0)
        {
        case 1:
            printf("It is a leap year");
            break;
        case 0:
            printf("It is not a leap year");
            break;
        }
    }
    return 0;




    }

