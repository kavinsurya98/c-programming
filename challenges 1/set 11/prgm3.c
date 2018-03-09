#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	int n,i;
	scanf("%[^\n]s",a);
	n=strlen(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(i==0)
		a[i]=toupper(a[i]);
		if(a[i]==' ')
		a[i+1]=toupper(a[i+1]);
	}
	printf("%s",a);
}
