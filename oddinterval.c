#include<stdio.h>
#include<conio.h>
void main()
{
int up,low,i,k=0;
printf("enter the lowest limit");
scanf("%d",&low);
printf("enter the highest limit");
scanf("%d",&up);
for(i=low;i<=up;i++)
{
if(i%2!=0)
printf("\n %d",i);
}
return 0;
}
