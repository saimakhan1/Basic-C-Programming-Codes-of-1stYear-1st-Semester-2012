#include<stdio.h>
int main()

{
    int a, b, min;
    scanf("%d %d", &a, &b); // if I add a space after %d in scanf quote than it waits for another input.
                            //so, don't add a space at then end of a scanf function inside the code
    if(a<b)
        printf("minimum number is %d",a);
    else
        printf("minimum number is %d",b);

    return 0;
}

