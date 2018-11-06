// write a program in c that takes a string as input and display to reverse order

#include<stdio.h>
#include<string.h>

int main()
{
    char a[10], b[10];
    int len, i, j;
    scanf("%s", a);

    len=strlen(a);

    for(i=len-1,j=0;i>=0;i--,j++) // / this loop is very important, it can't be written as for(i=len,j=1;i>=1;i--,j++)
        b[j]=a[i];
        b[j]='\0';

        printf("%s\n", b);

    return 0;
}
