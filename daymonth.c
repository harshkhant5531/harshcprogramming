#include<stdio.h>
void main(){
	int v;
	printf("enter num");
	scanf("%d",&v);
	
	switch(v)
	{
		case 1: printf("sun");
		break;
		case 2: printf("mon");
		break;case 3: printf("tue");
		break;case 4: printf("wed");
		break;case 5: printf("ter");
		break;case 6: printf("fri");
		break;case 7: printf("sat");
		break;
	}
}
