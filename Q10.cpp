#include<stdio.h>       //finding roots of a quadratic equation
#include<math.h>
int main()
{
    double dis,a,b,c,real,img,r1,r2;
    printf("Enter coefficients a , b & c : ");
    scanf("%lf%lf%lf",&a,&b,&c);
    dis=((b*b)-(4*a*c));
    switch(dis>0)
    {
    case 1 :
        r1=(-b+sqrt(dis))/(2*a);
        r2=(-b-sqrt(dis))/(2*a);
        printf("Root 1 : %lf & Root 2 : %lf",r1,r2);
        break;
    case 0 : switch(dis==0)
        {
    case 1 :
        r1=r2=(-b/(2*a));
        printf("Root 1 : %lf & Root 2 : %lf",r1,r2);
        break;
        case 0 : switch(dis<0)
        {
            img=sqrt((4*a*c)-(b*b)/(2*a));
            real=(-b/(2*a));
            printf("Root 1 : %lf & Root 2 : %lf",real+img,real-img);
            break;
        }
        break;
        }
        break;

    }
}

