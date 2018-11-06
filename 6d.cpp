#include<stdio.h>

int main()

{
    int a, n,i,  sum=0, avg;
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        scanf("%d", &a);
        sum=sum+a;
    }

    avg= sum/n;
    printf("%d ", avg);


    return 0;
}
