#include<stdio.h>

int max(int n, int a[])
{
    int i, max_num=-1000;
        for(i=0;i<n;i++)
            if(a[i]>max_num)
            max_num=a[i];
     return max_num;
}

int main()
{
    int n,i, a[10], max_num;
    scanf("%d", &n);
        for(i=0;i<n;i++)
            scanf("%d", &a[i]);

    max_num=max(n, a);
    printf("%d is the maximum number ", max_num);

    return 0;
}
