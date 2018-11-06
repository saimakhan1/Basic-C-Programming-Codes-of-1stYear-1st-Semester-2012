#include<stdio.h>

int main()

{
    int a, b, i, j, k;
    scanf("%d %d", &a, &b);
        for(i=1;i<=a;i++)
        {
            for(j=1;j<=i;j++)
            {
                for(k=1;k<=b;k++)
                printf("%d ",j);
            }
            printf("\n");
        }


    return 0;
}
