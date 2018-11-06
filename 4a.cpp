#include<stdio.h>

int main()

{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a>=b && a>=c)
        printf("%d is maximum\n", a);
    else
    if(b>=a && b>=c)
        printf("%d is maximum\n", b);
    else
    if(c>=b && c>=a)
        printf("%d is maximum\n", c);


    if(a>b && a<c || a>c && a<b)
        printf("%d is medium\n", a);
    else
    if(b>c && b<a || b>a && b<c)
        printf("%d is medium\n", b);
    else
    if(c>b && c<a || c>a && c<b)
        printf("%d is medium\n", c);


    if(a<=b && a<=c)
        printf("%d is minimum\n", a);
    else
    if(b<=a && b<=c)
        printf("%d is minimum\n", b);
    else
    if(c<=b && c<=a)
        printf("%d is minimum\n", c);


    return 0;
}
