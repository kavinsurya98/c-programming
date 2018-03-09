#include <stdio.h>
int main(void) {
	int n,rev,i,count=0;
	scanf("%d",&n);
	while(n>0)
	{
		rev=n%10;
		count++;
		n=n/10;
	}
	printf("%d",count);
}
