#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	n=n+1;
	do
	{
		n=n+1;
	}while(n%10!=0);
	printf("%d",n);
}
