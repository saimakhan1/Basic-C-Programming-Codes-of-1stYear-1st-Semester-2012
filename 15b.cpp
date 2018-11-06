#include<stdio.h>

int main()

{
        FILE *a, *b;
        int n,i,x[5],y[5];

    a=fopen("input.txt","w");
    b=fopen("input.txt","r");

        printf("Enter the value of n: \n");

        scanf("%d", &n);
        for(i=0;i<n;i++)
            scanf("%d %d",&x[i], &y[i]);



    for(i=0;i<n;i++)
        fprintf(a,"%d %d\n", x[i], y[i]);


        for(i=0;i<n;i++)
        {
            fscanf(b,"%d %d", &x[i], &y[i]);
            printf("%d %d\n", x[i], y[i]);
        }
    fclose(a);
    fclose(b);

    return 0;
}
