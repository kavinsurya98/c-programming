#include<stdio.h>
#include<string.h>
int main(void)
{
	int a,b,c,r;
	scanf("%d%d%d",&a,&b,&c);
	r=a*b%c;
	printf("%d",r);
}
