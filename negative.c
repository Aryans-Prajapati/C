#include<stdio.h>
#include<conio.h>
void main()
{
    int number,x;
    printf("\n write your number");
    scanf("%d",&x);
    number=x==0?printf("zero"):x>0?printf("positive"):printf("negative");
    getch();
}