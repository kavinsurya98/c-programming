#include<stdio.h>
int main(void)
{
	int n,temp,rev=0;
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rev=rev*10;
		rev=rev+n%10;
		n=n/10;
	}
	if(temp==rev)
	printf("YES");
	else
	printf("No");
}
