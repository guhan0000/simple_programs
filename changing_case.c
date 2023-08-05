#include<stdio.h>
int main()
{
    char ch;
    int res;
    printf("enter an alphabet");
    scanf("%c",&ch);
    res=ch^32;
    printf("%c",res);
}