#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,pal,temp=0;
scanf("%d"&a);
pal=a;
for(i=0;pal!=0;i++)
{
a=pal%10;
temp=temp*10+b;
pal=pal/10;
}
if(a==temp)
printf("palidrome");
return 0;
}
