#include<stdio.h>
int main(void)
{
	int a=34,b=44,c=87;
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a>c))
	{
		printf("%d is greater",a);
	}
	else if(b>c)
	{
		printf("%d is greater",b);
	}
	else
	{
		printf("%d is greater",c);
	}

}
