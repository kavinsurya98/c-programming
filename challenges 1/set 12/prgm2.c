#include <stdio.h>
int main(void) {
	int n,k,a[100],i,flag;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		flag=1;
	}
	if(flag==1)
	printf("Yes");
	else
	printf("No");
}
