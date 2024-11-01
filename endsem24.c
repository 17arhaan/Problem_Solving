#include<stdio.h>
int main()
{
    char str[100];
    int s,i;
    printf("Enter the string: ");
    gets(str);
    s=strlen(str);
    for (i=0;i<s;i++)
    {
        printf("%c",str[s-i-1]);
    }
    return 0;
}
