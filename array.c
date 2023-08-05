#include<stdio.h>
#include<limits.h>
int main()
{
    int size,i;
    printf("enter the size of an array");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;scanf("%d",&arr[i++]));
    printf("the number of elements in the array are ");
    for(i=0;i<size;printf("%d ",arr[i++]));
    

}