#include<stdio.h>
#define total 5

struct cricket
{
    char player_name[20],team_name[20];
    int batting_average;
};

int main()
{
    struct cricket player[total];
    int i;

    for(i=0;i<total;i++)
    {
        printf("Enter the Records for player %d ", i+1);
        printf("\nEnter the player name: ");
        scanf("%s", player[i].player_name);

        printf("\nEnter the team name: ");
        scanf("%s", player[i].team_name);

        printf("Enter the batting average: ");
        scanf("%d",&player[i].batting_average);
    }

        for(i=0;i<total;i++)
            printf("\n%s %s %d", player[i].player_name, player[i].team_name,player[i].batting_average);
        printf("\n");

    return 0;
}
