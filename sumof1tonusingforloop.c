#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("enter a value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+1;
	}
	printf("sum of 1 to n=%d",sum);
}
