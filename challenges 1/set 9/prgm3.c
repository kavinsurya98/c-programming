#include <stdio.h>

int main(void) 
{
	long int a,b,c,d;
	scanf("%ld%ld",&a,&b);
	c=a/b;
	d=a%b;
	printf("%ld %ld",c,d);
}
