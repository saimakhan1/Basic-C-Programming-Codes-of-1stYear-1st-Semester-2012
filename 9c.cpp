#include<stdio.h>

int main()
{
    int a[10], n, i, index;
    int min=a[0];

    scanf("%d", &n);
        for(i=0;i<n;i++)
            scanf("%d", &a[i]);

        for(i=0;i<n;i++)
        if(a[i]<min)
         {
             min=a[i];
             index=i;
             a[index]=a[i];
         }
    a[index]='\0';

    for(i=0;i<n;i++)
        if(a[i]!='\0')
            printf("%d", a[i]);


    return 0;
}
