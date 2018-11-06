#include<stdio.h>
int main()

{
    int a, b, c, d, rem,gcd, lcm;
    scanf("%d %d", & a, &b);

    c=a;
    d=b;
    for(;rem!=0;)

    {
        rem=c%d;
        c=d;
        d=rem;
    }

    gcd=c;

    lcm=a*b/gcd;

    printf("gcd is %d & lcm is %d", gcd, lcm);
    return 0;
}
