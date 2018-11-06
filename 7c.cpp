// write a c program that takes a string as input and print yes if the string is palindrome and print "No" otherwise
#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int i,j, len, flag=0;
    scanf("%s", a);

    len=strlen(a);

    for(i=0,j=len-1;i<len,j>=0;i++,j--)
    {
        if(a[i]!=a[j])
            flag=1;
    }

    if(flag==1)
        printf("No, it's not a palindrome\n");

    else
        printf("Yes, it's a palindrome");

    return 0;
}
