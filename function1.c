#include<stdio.h>
int add(int val1,int val2);
add(val1,val2)
{
    int sum=val1+val2;
    return sum;
}
int main()
{
    int num1=19,num2=1;
    printf("%d",add(num1,num2));
}