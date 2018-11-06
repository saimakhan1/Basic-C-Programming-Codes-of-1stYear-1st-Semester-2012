#include<stdio.h>

void sort(int n, int a[])
{
    int i, j, temp;

    scanf("%d", &n);
        for(j=0;j<n;j++)
            scanf("%d", &a[j]);

     for(i=0;i<n;i++)
        for(j=0;j<n;j++)
         if(a[j]>a[j+1])
         {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
         }



     for(j=0;j<n;j++)
        printf("%d ", a[j]);

}

int main()
{
    int p,q[10];

    sort(p,q);

    return 0;
}
