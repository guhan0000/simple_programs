#include<stdio.h>
int main()
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	int digit=0,rev=0;
	while(num>0)
	{
		digit=num%10;
		rev=rev*10+digit;
		num/=10;
	}
	printf("%d",rev);
}
