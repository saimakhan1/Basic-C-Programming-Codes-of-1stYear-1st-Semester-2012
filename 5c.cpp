#include<stdio.h>
#include<string.h>
int main()

{
    char a[10];
	int i,len;

	scanf("%s",a);//?? a is a string
	len=strlen(a);

	for(i=len-1;i>=0;i--)

	printf("%c",a[i]);//??? each index stores a character
    return 0;
}
