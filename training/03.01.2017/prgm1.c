//validate the given string is numeric or not
#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	int i,n;
	scanf("%s",a);
	n=strlen(a);
	if(a[i]>=48&&a[i]<=57)
	{
		printf("%s is True",a);
	}
	else
	{
		printf("%s is False",a);
	}
	return 0;
}

