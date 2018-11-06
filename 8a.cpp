#include<stdio.h>

int main()
{
    int a[10], n, temp, i,j;

    scanf("%d", &n);
        for(i=0;i<n;i++)
            scanf("%d", &a[i]);// be careful to take as a[i], don't take as a

    for(j=0;j<n;j++)
        for(i=0;i<n-1;i++)
        {
            if (a[i]>a[i+1])
             {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
             }
        }

    for(i=0;i<n;i++)
        printf("%d ", a[i]);
    return 0;
}
