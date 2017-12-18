#include<stdio.h>
int main()
{
	char x;
	printf("Enter the character:");
	scanf("%c",&x);
	if((x>='a'&&x<='z')||(x>='A'&&x<='Z'))
	{
		printf("character");
	}
	else
	{
		printf("not a character");
	}
}
