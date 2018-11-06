#include<stdio.h>

void fibo(int n)
{
    int n1=n;
    int a[20],i;
    a[0]=0;
    a[1]=1;

    for(i=2;i<=n;i++)
        a[i]=a[i-2]+a[i-1];

    printf("The Fibonacci series is: \n");
    for(i=0;i<=n;i++)
        printf("%d ", a[i]);

    printf("\nThe %dth Fibonacci number is %d:", n1, a[n1]);
}

int main()
{
    int n;
    printf("Enter the value of n: \n");
    scanf("%d", &n);

    fibo(n);

    return 0;
}
