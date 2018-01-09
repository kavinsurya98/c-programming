//program to fine the minimum element in an array
#include<stdio.h>
int main(void)
{
	int n,a[100],i,j,min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("%d",min);
	return 0;
}
