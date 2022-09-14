#include<stdio.h>       //whether a triangle is isoceles,right angeled equilateral triangle
#include<stdlib.h>
int main()
{
    int choice,a,b,c;
    while(1)
    {
    printf("\n1. To check whether triangle is isoceles triangle");
    printf("\n2. To check whether the triangle is right angle triangle");
    printf("\n3. To check whether the triangle is equilateral triangle");
    printf("\n4. Exit");
    printf("\nEnter your choice (1-4) : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter sides of the triangle :");
        scanf("%d%d%d",&a,&b,&c);
        if(a==b||b==c||c==a)
            printf("It is a isoceles triangle");
            else
                printf("It is not a isoceles triangle");
        break;
    case 2:
        printf("Enter sides of the triangle :");
        scanf("%d%d%d",&a,&b,&c);
        int m,n,o;
        m=a*a;
        n=b*b;
        o=c*c;
        if((m+n==o)||(n+o==m)||(m+o==n))
            printf("It is a right angle triangle %d");
        else
            printf("It is not a right angle triangle %d");
        break;
    case 3:
        printf("Enter sides of the triangle :");
        scanf("%d%d%d",&a,&b,&c);
        if(a==b&&b==c)
            printf("It is a equilateral triangle");
        else
            printf("It is not a equilateral triangle");
        break;
    case 4:
        exit(0);
    default:
        printf("Invalid choice");
        break;

    }
    }
    return 0;
}
