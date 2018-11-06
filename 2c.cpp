#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()

{
    int x,y;

    scanf("%d", &x);
    y=pow(x,3)+2*abs(x)+5;
    printf("%d", y);
    return 0;
}
    // if integer is replaced by float then, it does not work for mod x that means abs(x).
    //<math.h> is used for pow(x,2);
    //<stdlib.h> is used for abs(x);
