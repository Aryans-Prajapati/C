#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i,sum=0;
    printf("enter any 5 number");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("sum of your array is %d",sum);
    getch();    
}