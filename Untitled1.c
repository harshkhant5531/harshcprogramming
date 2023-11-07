#include<stdio.h>
int addision(int,int);
void main(){
	int a,b,sum;
	printf("Enter a value of a:");
	scanf("%d",&a);
    printf("Enter a value of b:");
	scanf("%d",&b);
	add(a,b,&*sum);
	printf("%d",*sum);
}
int addision("int *a,int *b,int *sum"){
	int sum=a+b;
	printf("ans is=%d",sum);
}
