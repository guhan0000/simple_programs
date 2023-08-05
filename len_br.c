#include<stdio.h>
int main()
{
    int num,digit,digit1,res;
    scanf("%d",&num);
    if (num>10)
    { 
        digit=num%10;
        digit1=num/10;
        res=2*(digit+digit1);
        printf("%d",res);
        /* code */
    }
    else
    {
        printf("-1");
    }


}