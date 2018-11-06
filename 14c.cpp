#include<stdio.h>
#include<math.h>

struct date
{
    int day, month, year;
};


bool validate(struct date d1)
{
    if(

       d1.day>31 || d1.day<1 ||

       d1.month>12 || d1.month<1

       || d1.year<1400 || (floor(log10(d1.year))+1)!=4

       || ((d1.month==2 || d1.month==4 || d1.month==6 || d1.month==9 || d1.month==11)
           &&
           d1.day>30
           )
       || (d1.month==2 && d1.day>28 && d1.year%4!=0)

       )
        return false;

    else return true;
}

/*void read_input(struct date d)
{
    printf("Enter the day, month & year: ");
    scanf("%d %d %d", &d.day, &d.month, &d.year);
}*/


void print_output(struct date d)
{

    if(d.month==1)
            printf("January ");

    else if(d.month==2)
            printf("February ");

    else if(d.month==3)
            printf("March ");

    else if(d.month==4)
            printf("April ");

    else if(d.month==5)
            printf("May ");

    else if(d.month==6)
            printf("June ");

    else if(d.month==7)
            printf("July ");

    else if(d.month==8)
            printf("August ");

    else if(d.month==9)
            printf("September ");

    else if(d.month==10)
            printf("October ");

    else if(d.month==11)
            printf("November ");

    else if(d.month==12)
            printf("December ");

    printf("%d, %d\n", d.day, d.year);

}



int main()
{
    struct date d;

    printf("Enter the day, month & year: ");
    scanf("%d %d %d", &d.day, &d.month, &d.year);

    //read_input(d);



     if(validate(d)==false)
        printf("\nIt's an Invalid input\n");

    else if (validate(d)==true)
      {
            printf("\nYeah!\n");
            print_output(d);
      }


    return 0;
}
