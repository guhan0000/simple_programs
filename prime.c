#include<stdio.h>
int main()
{
    int num,count,i=1;
    scanf("%d",&num);
    while (num>=i)
    {
        /* code */
        if (num%i==0)
        {
            count++;
        }
        i++;
        
    }
    
    if(count==2)
        printf("prime");
    else
        printf("not prime");
}