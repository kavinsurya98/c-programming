#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[100];
	int i,flag;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='o'||a[i]=='u')
		{
			flag=1;
		}
	}
	if(flag==1)
	printf("Yes");
	else
	printf("No");
	return 0;
}
