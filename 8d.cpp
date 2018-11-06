#include<stdio.h>

int main()

{
    int a[15]={8,1,2,3,5,4,6,1,5,2,100,3,25,15,30};
    int i, min= a[0], min1, min2, min3, index1, index2, index3;

    for(i=0;i<16;i++)
        if(a[i]<min)
        {
            min=a[i];
            index1=i;
            min1=a[index1];
        }

        a[index1]= 10000;
        min=a[0]; // every time the min value have to be updated

        for(i=0;i<16;i++)
        if(a[i]<min)
        {
            min=a[i];
            index2=i;
            min2=a[index2];
        }

        a[index2]=100000;
        min=a[0];

        for(i=0;i<16;i++)
        if(a[i]<min)
        {
            min=a[i];
            index3=i;
            min3=a[index3];
        }

    printf("3 minimum numbers are %d %d %d",min1, min2, min3);


    return 0;
}
