#include<stdio.h>
int add(int val1,int val2);
int sub(int val1,int val2);
int div(int val1,int val2);
int rem(int val1,int val2);
int scan(int val)
{
    //int val;
    scanf("%d",&val);
    return val;  
}
int print(int val)
{
    printf("%d",val);
   // return val; won't work

}
add(val1,val2)
{
    return val1+val2;
}
sub(val1,val2)
{
    return val1-val2;
}
mul(val1,val2)
{
    return val1*val2;
}
div(val1,val2)
{
    return val1/val2;
}
rem(val1,val2)
{
    return val1%val2;
}
int main()
{
    int num1,num2;
    char key;
    printf("enter  numbers");
   // scan(num1);
    //scan(num2);

    num1=scan(num1);
    num2=scan(num2);
    printf("enter operator");
    scanf("%c",&key);
    printf("%c",key);
   // printf("%d",num1);
   // print(num1);
    //print(num2);
    switch(key)
    {
        case '+':print(add(num1,num2));break;
        case '-':print(sub(num1,num2));break;
        case '*':print(mul(num1,num2));break;
        case '/':print(div(num1,num2));break;
        case '%':print(rem(num1,num2));break;

    }
    
}