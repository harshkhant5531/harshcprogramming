#include<stdio.h>
void main()
{
	float a,s;
	printf("enter your salary");
	scanf("%f",&a);
	if(a>=10000 && a<20000)
	{
	s=a+(a*.20) + (a*.80);
    }
	else if(a>=20000 && a<30000)
	 
	{
	s=a+(a*.25) + (a*.90);
	}
	else if(a>30000)
	{
	s=a+(a*.30) + (a*.95);
	}
	printf("%f",s);
}
