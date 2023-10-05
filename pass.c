#include<stdio.h>
void main(){
	
	int a,b,c,d,e,per;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	per=(a+b+c+d+e)/5;
	if(per<=35){
		printf("fail");
		
	}
	if(per>=36 && per<=45){
		
		printf("pass");
		
		
	}
	if(per>=46 && per<=60){
		
		printf("second class");
	}
	
	if(per>=61 && per<=70){
		
		printf("first class");
	}
	if(per>=70){
		
		printf("dis");
	}
	
}
