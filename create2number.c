#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b,c,i,sum=0;
printf("enter the natural number");
printf("enter the sum of the numbers we want");
scanf("%d%d",&b,&c);
for(i=1;i<=c;i++)
{
scanf("%d",a[i]);
}
for(i=1;i<=b;i++)
{
sum=sum+i;
}
printf("%d",sum);
}
