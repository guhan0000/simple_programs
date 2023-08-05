#include<stdio.h>
int main()
{
	int num;
	printf("enter an integer");
	scanf("%d",&num);
	int digit=0,sum=0;
	while(num>0)
	{
		digit=num%10;
		sum=sum+digit;
		num/=10;
	}
	printf("%d",sum);
}
