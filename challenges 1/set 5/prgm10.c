#include<stdio.h>
int main(void)
{
	int n,temp,flag=0;
	scanf("%d",&n);
	temp=n;
	while(temp!=1)
	{
		if(temp%2!=0)
		{
			flag=1;
			break;
		}
		temp=temp/2;
	}
	if(flag==0)
	printf("Yes");
	else
	printf("No");
}
