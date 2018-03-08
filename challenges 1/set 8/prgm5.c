#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[100];
	int m,n;
	scanf("%s",a);
	n=strlen(a);
	if(n%2==0)
	{
		m=n/2;
		a[m]='*';
		a[m-1]='*';
		printf("%s",a);
	}
	else
	{
		m=n/2;
		a[m]='*';
		printf("%s",a);
	}
}
