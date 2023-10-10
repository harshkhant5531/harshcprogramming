#include<stdio.h>
void main()
{
	int n,rev=0,num;
	printf("enter a value of n:");
	scanf("%d",&n);
	num=n;
	while(n!=0){
		rev=(rev*10)+(n%10);
		
		n=n/10;
	}
	if(rev==num){
		printf("number is pelidrome");
	}
}
