#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,sum=0,mul=1;
    printf("enter a number");
    scanf("%d",&n);

while(n>0)
{
    r=n%10;
    sum=sum+r;
    mul=mul*r;
    n=n/10;
}
    if(sum==mul)
    printf("it is perfect number");
    else
    printf("it is not a perfect number");

getch();
}