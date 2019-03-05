#include<stdio.h>
#include<conio.h>
void main()
{
int a,n,i=1;
scanf("%d"&a);
n=a;
while(a!=0)
{
a=a/10;
if(a!=0)
i++;
}
printf("%d",i);
}
