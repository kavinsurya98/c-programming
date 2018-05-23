#include<stdio.h>
int main(void)
{
	int a[100],b[100],i,j,k,n,q,p[100],count=0,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(q=0;q<9;q++)
	{
		p[q]=0;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>=0&&a[i]<=9)
		{
			p[a[i]]++;
		}
	}
	for(q=0;q<9;q++)
	{
		if(p[q]>1)
		{
			b[count]=q;
			count++;
		}
	}
	for(j=0;j<count;j++)
	{
		printf("%d   ",b[j]);
		break;
	}
	
}
