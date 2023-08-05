#include<stdio.h>
int main()
{
    int arr[3][3];
    int i,j;
    printf("enter elements");
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
     for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%d",&arr[i][j]);
        }
    }
}