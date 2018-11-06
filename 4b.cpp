#include<stdio.h>
#include<math.h>

int main()
{
    double x1, y1, x2, y2, x3, y3, x4, y4, d1, d2, d3, d4;
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

    d1=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    d2=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    d3=sqrt(pow(x3-x4,2)+pow(y3-y4,2));
    d4=sqrt(pow(x4-x1,2)+pow(y4-y1,2));

    if(d1==d2 && d2==d3 &d3==d4)
        printf("Yes, it is a rhombus!");
    else
        printf("No, it's not a rhombus");

    return 0;
}
