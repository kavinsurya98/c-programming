#include<stdio.h>
#include<conio.h>
void main()
{
int high,low,i,k=0;
printf("enter the lower limits");
scanf("%d",&low);
printf("enter the highest limits");
scanf("%d",&high);
for(i=low;i<=high,i++)
{
if(i%2==0)
printf("%d",i);
}
reture 0;
}
