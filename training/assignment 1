// swap all the even and odd character in string i/p abcd o/p badc i/p abc o/p bac
#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[20],temp;
	int i,n;
	printf("\nEnter a string:");
	scanf("%s",a);
	n=strlen(a);
	if(n%2==0)
	{
		for(i=0;i<n;i+=2)
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			printf("\n%c%c",a[i],a[i+1]);
		}
	}
	else
	{
		for(i=0;i<n;i+=2)
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			printf("%c%c",a[i],a[i+1]);
		}
	}
}
