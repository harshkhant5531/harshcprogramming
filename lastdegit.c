#include<stdio.h>
void main(){
	int a,b;
	printf("enter the num:");
	scanf("%d",&a);
	b=a%10;
	if(b%2==0){
		printf("even");
		
	}
	else{
		
		printf("odd");
	}
	
}
