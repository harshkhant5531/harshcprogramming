//Print multiplication table of a given number
#include<stdio.h>
void main()
{
	int a,n,i=1;
	printf("\nenter a value:");
	scanf("%d",&n);
	printf("\nenter a value:");
	scanf("%d",&a);
	while(i<=n)
	{
		printf("\n%d*%d=%d",i,a,i*a);
		i++;
	}
}
