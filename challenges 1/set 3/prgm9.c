#include<stdio.h>
int main(void)
{
	int n,t,s;
	scanf("%d",&n);
	t=n/60;
	s=n%60;
	printf("%d %d",t,s);
}
