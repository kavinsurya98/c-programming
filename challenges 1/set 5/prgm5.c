#include<stdio.h>
int main(void)
{
	int n,count=0,rev;
	scanf("%ld",&n);
	while(n!=0)
	{
		rev=n%10;
		count=count+1;
		n=n/10;
	}
	printf("%ld",count);
}
