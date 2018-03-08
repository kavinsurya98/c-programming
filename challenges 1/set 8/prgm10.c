#include<stdio.h>
int main(void)
{
	int n,s,r=0,m;
	scanf("%d",&n);
	while(n>0)
	{
		s=n%10;
		r=(r*10)+s;
		n=n/10;
	}
	n=r;
	while(n>0)
	{
		s=n%10;
		if(s%2!=0)
		printf("%d ",s);
		n=n/10;
	}
}
