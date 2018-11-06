#include<stdio.h>

int main()

{
    int x, y, z, number;
    scanf("%d", &number);
    x= number/100;
    number= number-x*100;
    y=number/10;
    number= number-y*10;
    z=number;

    if(x==1)
        printf("one hundred ");
    else if(x==2)
        printf("two hundred ");
    else if(x==3)
        printf("three hundred ");
    else if(x==4)
        printf("four hundred ");
    else if(x==5)
        printf("five hundred ");
    else if(x==6)
        printf("six hundred ");
    else if(x==7)
        printf("seven hundred ");
    else if(x==8)
        printf("eight hundred ");
    else if(x==9)
        printf("nine hundred ");


    if(y==2)
        printf("twenty ");
    if(y==3)
        printf("thirty ");
    if(y==4)
        printf("forty ");
    if(y==5)
        printf("fifty ");
    if(y==6)
        printf("sixty ");
    if(y==7)
        printf("seventy ");
    if(y==8)
        printf("eighty ");
    if(y==9)
        printf("ninety ");



    if(y!=1)
    {
       if(z==1)
            printf("one ");
        else if(z==2)
            printf("two ");
        else if(z==3)
            printf("three ");
        else if(z==4)
            printf("four ");
        else if(z==5)
            printf("five ");
        else if(z==6)
            printf("six ");
        else if(z==7)
            printf("seven ");
        else if(z==8)
            printf("eight ");
        else if(z==9)
            printf("nine ");
    }
    else if(y==1)
    {
        if(z==1)
            printf("eleven ");
        else if(z==2)
            printf("twelve ");
        else if(z==3)
            printf("thirteen ");
        else if(z==4)
            printf("fourteen ");
        else if(z==5)
            printf("fifteen ");
        else if(z==6)
            printf("sixteen ");
        else if(z==7)
            printf("seventeen ");
        else if(z==8)
            printf("eighteen ");
        else if(z==9)
            printf("nineteen ");
    }

    return 0;
}
