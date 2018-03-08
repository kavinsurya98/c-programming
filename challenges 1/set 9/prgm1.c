#include<stdio.h>
int main(void)
{
	int m,n,i,d;
	for(i=0;i<3;i++)
	{
		scanf("%d %d",&m,&n);
		if(m>n)
		{
			d=m-n;
			printf("%d\n",d);
		}
		else
		{
			d=n-m;
			printf("%d\n",d);
		}
	}
}
