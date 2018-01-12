#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[1000];
	int n,i,j,k,count=0;
	scanf("%s",a);
	scanf("%d",&k);
	n=strlen(a);
	for(i=0;i<k;i++)
	{
		for(j=0;j<n;j++)
		{
			count++;
		}
		printf("%s\n",a);
	}
}
