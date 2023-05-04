#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i,max;
    printf("enter any 5 values");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    max=a[0];    
    }
    for(i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("max is %d",max);
    getch();
}