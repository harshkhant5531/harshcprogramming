//Calculate  without using power function
#include<stdio.h>

void main()
{
int i,a,b,ans=1;

printf("\nEnter the value of a");
scanf("%d", &a);

printf("\nEnter the value of b");
scanf("%d", &b);

for(i=1; i<=b; i++)
{
ans= ans*a;
}

printf(" %d \nto the power %d is %d", a, b, ans);

}
