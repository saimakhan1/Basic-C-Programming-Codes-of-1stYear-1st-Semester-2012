#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c, x1, x2;

    scanf("%f %f %f", &a , &b, &c ); // I was getting error for long time because I wrote "scanf("%lf,%lf,...")"

    x1=(-b+ sqrt(b*b-4*a*c))/(2*a);

    x2=(-b- sqrt(b*b-4*a*c))/(2*a);

    printf("%.02lf %.02lf", x1, x2);

    return 0;
}
