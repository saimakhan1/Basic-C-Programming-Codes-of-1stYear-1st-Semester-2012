#include<stdio.h>
int main()
{
    int n, a, i, avg, sum=0;
    scanf("%d", &n);
        for(i=0;i<n;i++)
        {
            scanf("%d", &a);
            sum=sum+a;
        }

        avg=sum/n;
        printf("average is %d ", avg);

    return 0;
}
