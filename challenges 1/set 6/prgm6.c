#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	scanf("%s",a);
	int n,i,flag;
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]>='a'||a[i]<='z'||a[i]>='A'||a[i]<='Z'||a[i]>='0'||a[i]<='9')
		flag=1;
		else
		flag=0;
	}
	if(flag==1)
	printf("Yes");
	else
	printf("No");
}
