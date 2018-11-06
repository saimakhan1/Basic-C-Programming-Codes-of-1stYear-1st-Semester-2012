#include<stdio.h>

int main()
{
    FILE *a;
    int i, n, number, quantity;
    float price;
    char item_name[5];

    a=fopen("inventory.txt","r");

    printf("Enter the value of n:\n");
    scanf("%d", &n);

    printf("Item  Number Price Quantity\n");
    for(i=0;i<n;i++)
    {
        fscanf(a,"%s %d %f %d", item_name, &number, &price, &quantity);
        printf("%s %d %.2f %d\n", item_name, number, price, quantity);
    }

    fclose(a);

    return 0;
}
