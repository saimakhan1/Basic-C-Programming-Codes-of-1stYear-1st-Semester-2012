#include<stdio.h>

int main()

{
    int a[10][10], b[10][10],i,j,n,m;
    int sum[10][10];

    printf("Enter the row numbers and column numbers\n");
    scanf("%d %d", &n, &m);

    printf("Enter the first matrix\n");
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                scanf("%d", &a[i][j]);

    printf("Enter the second matrix\n");
         for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                scanf("%d", &b[i][j]);


    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            sum[i][j]=a[i][j]+b[i][j];


    printf("The addition of the matrix is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%d ", sum[i][j]);
            printf("\n");
    }

    return 0;
}
