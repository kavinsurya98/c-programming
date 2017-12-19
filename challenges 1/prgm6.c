#include<stdio.h>
int main()
{
	int n=2011;
	if(n%400==0)
	{
		printf("\nLeap year");
	}
	else if(n%100==0)
	{
		printf("\nNot a leap year");
	}
	else if(n%4==0)
	{
		printf("\nLeap year");
	}
	else
	{
		printf("\nNot a leap year");
	}
}
