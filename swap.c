#include<stdio.h>
int main()
{
    int num1,num2,temp;
    scanf("%d %d",&num1,&num2);
    printf("before swapping %d %d\n",num1,num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("after swapping %d %d",num1,num2);
}