//program to find the maximum element in an array
#include<stdio.h>
int main(void)
{
	int n,a[100],i,j,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("%d",max);
	return 0;
}
