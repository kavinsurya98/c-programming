#include<stdio.h>
int main(void)
{
	int n,odd,even;
	scanf("%d",&n);
	if(n%2==0)
	{
		even=n;
		printf("%d",even);
	}
	else
	{
		odd=n-1;
		printf("%d",odd);
	}
}
