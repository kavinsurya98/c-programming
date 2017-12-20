//roman numbers to decimal number
#include<stdio.h>
#include<string.h>
int main(void)
{
	char r[10];
	int a[10],i,j,n,s=0;
	scanf("%s",r);
	n=strlen(r);
	for(i=0;i<n;i++)
	{
		if(r[i]=='I')
		{
			a[i]=1;
		}
		else if(r[i]=='V')
		{
			a[i]=5;
		}
		else if(r[i]=='X')
		{
			a[i]=10;	
		}
	}
	s=a[0];
	for(j=0;j<n-1;j++)
	{
		if(a[j]<a[j+1])
		{
			s=a[j+1]-s;
		}
		else
		{
			s=s+a[j+1];
		}
	}
	printf("%d",s);
	return 0;
}
