#include<stdio.h>
#include<string.h>

void check_palindrome(char a[])
{
    int i, j, flag=0;
    scanf("%s", a);
    int len=strlen(a);

    for(i=0,j=len-1; i<len,j>=0;i++, j--)
        if(a[i]!=a[j])
    {
        flag=1;
        break;
    }

    if(flag==1)
        printf("Not palindrome");
    else printf("Yea, Palindrome");

}

int main()
{
    char word1[10];

    check_palindrome(word1);

    return 0;
}
