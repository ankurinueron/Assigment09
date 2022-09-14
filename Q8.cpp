#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    switch(x>=0)
    {
    case 1 :
        printf("The new number is %d",-x);
        break;
    case 0 :
        printf("The new number is %d",-x);
        break;
    }
    return 0;
}
