#include<stdio.h>
void main()
{
int a,b,c;
printf("the number of a,b,c\n");
scanf("%d,%d,%d",&a,&b,&c);
if(a>b)
{
if(a>c)
printf("a is greater");
else
printf("ci is greater");
}
else
{
if(b>c)
printf("b is greater");
else
printf("c is greater");
}
}
