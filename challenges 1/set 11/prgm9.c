#include<stdio.h>
#include<string.h>
int main(void)
{
	int n,i,min,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("%d",min);

}
