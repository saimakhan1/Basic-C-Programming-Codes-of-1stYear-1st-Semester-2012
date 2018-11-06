#include<stdio.h>

int sort1(int n, int a[])
{
    int i,j, temp;

    for(j=0;j<n;j++)
        for(i=0;i<n;i++)
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }

    printf("The Sorted Values are: \n");
    for(i=0;i<n;i++)
        printf("%d\n", a[i]);

}

float average(int numbers, int p[])
{
    int i, sum=0;
    float  avg;
    for(i=0;i<numbers;i++)
        sum=sum+p[i];

    avg=sum/numbers;

    printf("The average is %.02lf \n", avg);//confusion! why the average is integer though used float

   // return avg;

}



int main()

{
    int n,a[10],i, avg;

    printf("Enter the numbers: ");
    scanf("%d", &n);

    printf("Enter the values: ");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);


    average(n,a);
    sort1(n,a);



    return 0;
}
