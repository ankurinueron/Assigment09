#include<stdio.h>       //switch case for unique message for any number of week
int main()
{
    int a;
    printf("Enter the day number (1-7) - Sunday to Saturday : ");
    scanf("%d",&a);
    switch(a)
    {
    case 1 :
        printf("SUNDAY is funday");
        break;
    case 2:
        printf("Need coffee because its MONDAY");
        break;
    case 3:
        printf("TUESDAY is veg day");
        break;
    case 4:
        printf("WEDNESDAY might be tough");
        break;
    case 5:
        printf("THRUSDAY is gym day");
        break;
    case 6:
        printf("FRIDAY : weekend is coming");
        break;
    case 7:
        printf("SATURDAY : Weekend is here");
        break;
        default :
        printf("Invalid choice");
        break;
    }
    return 0;
}
