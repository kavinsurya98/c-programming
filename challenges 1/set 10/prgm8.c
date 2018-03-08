#include<stdio.h>
#include<string.h>
int main(void)
{
	int n,i,k,a[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
		if(a[i]!=i)
		printf("%d",i);
	}
}
