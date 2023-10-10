#include<stdio.h>
int main()
{
	int P,T,R,interest;
	printf("enter the principle amount");
	scanf("%d",&P);
	printf("enter the time");
	scanf("%d",&T);
	printf("enter the rate");
	scanf("%d",&R);
	interest=(P*T*R)/100;
	printf("interest: %d",interest);
	return 0;
}
