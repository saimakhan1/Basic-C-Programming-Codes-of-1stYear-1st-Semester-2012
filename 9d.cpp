#include<stdio.h>

int main()
{
    int n, a, arr[10], arr2[10], i, j=0, b[10],count;
    for(i=0;i<10;i++)
        arr[i]=0;

    scanf("%d", &n);
        for(i=0;i<n;i++)
        {
           scanf("%d", &a);
           arr[a]++;

           if(arr[a]==1)
           {
               b[j]=a;
               j++;
           }
            count=j;
        }

        for(j=0;j<count;j++)
        {
            printf("%d ", b[j]);

        }

    return 0;
}
