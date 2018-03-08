#include<stdio.h>
#include<string.h>
int main(void)
{
	int n,s,r=1;
	scanf("%d",&n);
	while(n>0)
	{
		s=n%10;
		r=r*s;
		n=n/10;
	}
	printf("%d",r);
}
