#include<stdio.h>
int main(void)
{
	int m,n,t,s,i;
	scanf("%d%d",&m,&n);
	s=m*n;
	for(i=1;;i++)
	{
		t=i*i;
		if(t==s)
		{
		printf("Yes");
		break;
		}
	}
	return 0;
}
