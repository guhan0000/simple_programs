// You are using GCC
#include<stdio.h>
int main()
{
    int hr,min;
    scanf("%d:%d",&hr,&min);
    if((hr>=0 && hr<=23)&&(min>=0&&min<=59))
    {
       if(hr>=1&&hr<=12)
            printf("%d:%d AM",hr,min);
        else if(hr>12 && hr<=23)
        {
            hr=hr-12;
            printf("%d:%d PM",hr,min);
        }
        else if((hr==0&&min==0))
        {
            printf("12:00 AM");
        }
        else if(hr<=0)
        {
            hr=1;
            printf("%d:%d AM",hr,min);
        }
        
        //printf("%d:%d",hr,min);
        
    }
    else
    {
        printf("Invalid time");
    }
}