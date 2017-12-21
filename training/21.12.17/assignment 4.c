//program to find the number of alphanumeric present in the given string
#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	int i,n,c=0,e=0;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if((a[i]>=65&&a[i]<=96)||(a[i]>=97&&a[i]<=122))
		{
			c++;	
		}
		else
		{
			e++;	
		}
	}
	printf("\nCharacters:%d",c);
	printf("\nOther characters:%d",e);
}
