#include <stdio.h>
int main(void) {
	int n,i,count=0,m,p;
	scanf("%d",&n);
	do
	{
		n=n/2;
		count++;
	}while(n!=1);
	for(i=0;i<=count;i++)
	{
		m=m*p;
	}
	printf("%d",m);
	return 0;
}
