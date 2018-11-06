#include<stdio.h>

void average(int n, int a)
{
    int sum=0, i;
    scanf("%d", &n);
        for(i=0;i<n;i++)
        {
            scanf("%d", &a);
            sum=sum+a;
        }
    int average_value=sum/n;
    printf("average value is %d \n", average_value);

}

int main()
{
    int p, q;
    average(p, q);

    return 0;
}
