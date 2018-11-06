#include<stdio.h>
#include<math.h>
int main()

{

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a+b>c && b+c>a && c+a>b)
        printf("It's a Triangle");
    else
        printf("No. It's not a triangle");

    return 0;

}
