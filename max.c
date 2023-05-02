#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,z,max;
    printf("take three numbers as x,y and z");
    scanf("%d%d%d",&x,&y,&z);
    max=(x>y)?(x>z)?x:z:(y>z)?y:z;
    printf("\nmaximum number is %d",max);
    getch();
    }