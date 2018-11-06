#include<stdio.h>

int main()

{
    FILE *a, *b;
    int x, sum=0;
    a=fopen("integers.txt", "r");
    b=fopen("integers.txt","a");

    while(fscanf(a, "%d", &x)!=EOF)
    {
        sum=sum+x;
    }

    fprintf(b,"\nsum is: %d\n", sum);

    fclose(a);
    fclose(b);

    return 0;
}
