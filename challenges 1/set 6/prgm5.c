#include<stdio.h>
int main(void)
{
	int n,m,s,odd,even;
	scanf("%d%d",&n,&m);
	s=n*m;
	if(s%2==0)
	printf("even");
	else
	printf("odd");
}
