#include<stdio.h>       //using switch case normal calculation
#include<stdlib.h>
int main()
{
    int x,y,a;
    while(1)
    {
    printf("\n1. Addition :\n");
    printf("2. Substraction :\n");
    printf("3. Multiplication :\n");
    printf("4. Division :\n");
    printf("5. Exit\n");
    printf("Enter your choice :");
    scanf("%d",&a);
    switch(a)
    {
case 1:
    printf("Enter two numbers :");
    scanf("%d%d",&x,&y);
    printf("The sum of two numbers is : %d",x+y);
    break;
case 2:
    printf("Enter two numbers :");
    scanf("%d%d",&x,&y);
    printf("The difference of two numbers is : %d",x-y);
    break;
case 3:
    printf("Enter two numbers :");
    scanf("%d%d",&x,&y);
    printf("The product of two numbers is : %d",x*y);
    break;
case 4:
    printf("Enter two numbers :");
    scanf("%d%d",&x,&y);
    printf("The sum of two numbers is : %d",x/y);
    break;
case 5:
    exit(0);
default:
    printf("Invalid choice");
    }
    }
return 0;
}
