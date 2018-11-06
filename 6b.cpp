#include<stdio.h>

int main()

{
    int a, b, sum=1,i;
    scanf("%d %d", &a, &b);
    for(i=1;i<=b;i++)
        sum=sum*a;

    printf("%d",sum );

    return 0;
}
