#include<stdio.h>
int main()
{
    int per;
    int i;
    double sales,com,sum=0;
    scanf("%d",&per);
    for(i=1;i<=per;i++)
    {
        scanf("%lf",&com);
        if(com<10000)
        {
            com=(com)*0.04;
            printf("Person %d : %.2lf\n",i,com);
        }
        else
        {
            com=(com)*0.05;
         printf("Person %d : %.2lf\n",i,com);   
        }
        sum=sum+com;
       
       
        
        
    }
     
    printf("Total Commission :%.2lf",sum);
}