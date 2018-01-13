#include<stdio.h>
int main(void)
{
	long n;
	int a[1000],i,j,temp;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("%d %d",a[0],a[n-1]);

}
