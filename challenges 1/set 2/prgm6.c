#include<stdio.h>
int main(void)
{
	int low,upp,i,j,prime;
	scanf("%d",&low);
	scanf("%d",&upp);
	for(i=low+1;i<=upp;i++)
	{
		prime=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				prime=0;
				break;
			}
		}
		if(prime==1)
		{
		printf("%d ",i);
		}
	}
}
