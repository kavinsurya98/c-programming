#include<stdio.h>
int main(void)
{
	int m,n,diff;
	scanf("%d%d",&m,&n);
	diff=m-n;
	if(diff%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}
