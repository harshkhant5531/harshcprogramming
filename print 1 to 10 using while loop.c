//Print 1 to 10 then modify program Print 1 to n using while and do while loop
#include<stdio.h>
void main()
{
	int a,i;
	printf("enter a value:");
	scanf("%d",&a);
	while(i<=a){
		printf("%d",i);
		i=i+1;
	}
}
