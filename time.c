#include<stdio.h>
int main()
{
    int hr,min,sec;
    printf("enter time");
    scanf("%d %d %d",&hr,&min,&sec);
    printf("%d:%d:%d",hr,min,sec);
    if((hr>=0 && hr<24)&&(min>=0 && min<60)&&(sec>=0 && sec<60))
        printf("valid time");
    else    
        printf("invalid time");
}