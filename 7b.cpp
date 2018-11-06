#include<stdio.h>

int main()

{
    int n,i, min=1000000, a;

    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
       scanf("%d", &a);
       if(a<min)
            min=a;
    }

    printf("%d is the minimum number\n ", min);

    return 0;
}
