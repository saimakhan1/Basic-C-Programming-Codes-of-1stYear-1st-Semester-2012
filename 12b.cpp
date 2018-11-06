#include<stdio.h>

struct point
{
    int x,y;
};

int main()

{
    struct point a[100],temp; //important to note that here temp is also a struct as we are using it to store the struct values
    int i,j,n;

    printf("Enter the number of coordinates: ");
    scanf("%d", &n);

    printf("Enter the coordinates: ");
    for(i=0;i<n;i++)
    scanf("%d %d", &a[i].x, &a[i].y);

    for(i=0;i<n;i++) // first sorting according to the x coordinates
        for(j=i+1;j<n;j++)
        if(a[i].x>a[j].x)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }

        for(i=0;i<n;i++) // then sorting according to the y coordinates where x coordinates are equal
            for(j=i+1;j<n;j++)
            if(a[i].x==a[j].x && a[i].y>a[j].y)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;

        }

        printf("\nThe sorted coordinates are: \n");
        for(i=0;i<n;i++)
        {
            printf("%d %d ", a[i].x, a[i].y);
            printf("\n");
        }

    return 0;
}
