#include<stdio.h>
int main(void)
{
	int n,ams=0,temp,rem;
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		ams=ams+(rem*rem*rem);
		n=n/10;
	}
	if(temp==ams)
	printf("Yes");
	else
	printf("No");
}
