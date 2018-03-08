#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	int i,n;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i=i+2)
	{
		printf("%c",a[i]);
	}
	printf(" ");
	for(i=1;i<n;i=i+2)
	{
		printf("%c",a[i]);
	}
}
