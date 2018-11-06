#include<stdio.h>

int main()
{
    int n, a, arr[10],i,x, max_freq=0, max_number, max_value;

    scanf("%d", &n);

    for(i=0;i<10;i++)
    {
        arr[i]=0;
    }

        for(i=0;i<n;i++)
        {
            scanf("%d", &a);
            arr[a]++;
        }

        for(i=0;i<10;i++)
        {
            if(arr[i]>max_freq) // what happens if the bracket is missing after the if(arr[i]>max_freq)
            {
                max_freq=arr[i];
                max_value=i;
            }

        }


        printf("%d has the maximum %d frequency", max_value, max_freq );
    return 0;
}
