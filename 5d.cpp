#include<stdio.h>

int main()
{
    int n, i ,b;

    scanf("%d", &n);

    for(i=1;i<=10;i++)
    {
        b=n*i;
        printf("%d * %d = %d\n", n,i,b);
    }

    return 0;
}
