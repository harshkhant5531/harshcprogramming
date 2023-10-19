#include<stdio.h>
void main()
{	int i,n,arr[n],positive=0,negative=0;
	printf("enter size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter arr[%d]",i);
		scanf("%d",&arr[i]);
		if(arr[i]>0){
			positive++;
		}
		else{
			negative++;
		}
	}
printf("no is positive=%d\n",positive);
printf("no is negative=%d",negative);
}

