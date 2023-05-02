#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,z;
    printf("take a value of x and y");
    scanf("%d%d",&x,&y);
    printf("\nbefor swapping x=%d and y=%d",x,y);
    z=x;
    x=y;
    y=z;
    printf("\nafter swapping x=%d and y=%d",x,y);
    getch();
}