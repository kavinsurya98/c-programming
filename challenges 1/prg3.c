#include<stdio.h>
int main()
{
	char x;
	printf("Enter the character:");
	scanf("%c",&x);
	if(x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='o'||x=='O'||x=='u'||x=='U')
	{
		printf("vowel");
	}
	else
	{
		printf("consonant");
	}
}
