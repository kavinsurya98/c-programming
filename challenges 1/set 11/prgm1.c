#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	int n,b,i;
	scanf("%s%d",a,&n);
	b=strlen(a);
	for(i=b-1;i>=0;i--)
	{
		printf("%c",a[i]);
		break;
	}
	return 0;
}
