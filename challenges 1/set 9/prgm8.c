#include<stdio.h>
int main(void)
{
	int n1,n2,i,res;
	scanf("%d%d",&n1,&n2);
	res=(n1>n2)?n1:n2;
	while(1)
	{
		if(res%n1==0&&res%n2==0)
		{
			printf("%d ",res);
			break;
		}
		++res;
	}
}
