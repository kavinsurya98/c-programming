#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	scanf("%s",a);
	int n,i,flag;
	n=strlen(a);
	for(i=0;i<3;i++)
	{
		printf("%c",a[i]);
	}

}
