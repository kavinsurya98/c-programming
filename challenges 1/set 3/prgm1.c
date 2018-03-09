#include<stdio.h>
int main(void)
{
	int a,n,d,r;
	scanf("%d%d%d",&a,&n,&d);
	r=(n/2)*((2*a)+((n-1)*d));
	printf("%d",r);
}
