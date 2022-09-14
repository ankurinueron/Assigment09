#include<stdio.h>       //electricity problem
int main()
{
    float x,amount=0,total=0;
    printf("Enter the units : ");
    scanf("%f",&x);
    switch(x<=50)
    {
    case 1 :
        amount=0.5*x;
        break;
        case 0 : switch(x<=150)
        {
            case 1:
            amount=((0.75*(x-50))+25);
            break;
            case 0: switch(x<=250)
            {
            case 1 :
                amount=((1.20*(x-150))+100);
                break;
            case 0 :
                amount=((1.50*(x-250))+220);
                break;
            }
            break;
        }
        break;
    }
    total=amount+(amount*0.20);
    printf("Total electricity bill is : %f",total);
    return 0;
}
