#include<stdio.h>
void main()
{
	int a,b;
	printf("enter an integer value:");
    scanf("%d",&a);
    printf("enter an integer value:");
    scanf("%d",&b);
    a=a+b,b=a-b,a=a-b;
    printf("%d %d",a,b);
}
		
