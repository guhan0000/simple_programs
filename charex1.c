#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z'))
        printf("alphabet");
    else if (ch>='0' && ch<='9')
    {
        printf("numbers");
    } 
    else
    {
        printf("character");
    }
}