#include<stdio.h>

struct time
{
   int hour, minute, second;
};

int main()
{
    struct time t[5];
    int i=1,a,b,c,d;

    //printf("Enter the value of n: ");
    //scanf("%d", &n);
    printf("\nEnter the hour, minute and second: ");
    //for(i=1;i<=n;i++)
        scanf("%d %d %d", &t[i].hour, &t[i].minute, &t[i].second); // sample input: 34, 170,190 & sample output=36,53,10

    if(t[i].second>=60)
    {
        a=t[i].second/60;
        b=t[i].second%60;
        t[i].minute=t[i].minute+a;
        t[i].second=b;

            if(t[i].minute>=60)
                c=t[i].minute/60;
                d=t[i].minute%60;
                t[i].hour=t[i].hour+c;
                t[i].minute=d;

    }

   // for(i=1;i<=n;i++)
        printf("\n%d: %d: %d: ", t[i].hour, t[i].minute, t[i].second);

    return 0;
}
