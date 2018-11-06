#include<stdio.h>
#include<math.h>

int main()
{
    int x, last_digit, digit_amount;

    scanf("%d", & x);

    last_digit= x%10;

    digit_amount= floor(log10(x))+1;

    printf("last_digit= %d & number of the given digit=%d", last_digit, digit_amount);

    return 0;
}
