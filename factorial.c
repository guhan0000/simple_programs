#include<stdio.h>
int main()
{
    int num,i;
    int fact=1;
    scanf("%d",&num);
    /*if(num==0)
        printf("%d",fact);*/
    for (i=1;i<=num;i++)
    {
        fact=fact*i;
        /* code */
    }
    printf("%d",fact);
    
}