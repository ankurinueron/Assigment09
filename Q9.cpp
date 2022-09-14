#include<stdio.h>       //taking even number and printing nearest largest odd number
int main()
{
    int x;
    printf("Enter any even number :");
    scanf("%d",&x);
    switch(x%2==0)
    {
    case 1 :
        printf("The largest nearest odd number is %d",++x);
        break;
    case 0 :
        printf("The largest nearest odd number is %d",x);
        break;
    }
    return 0;

}
