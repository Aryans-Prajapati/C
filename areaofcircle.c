#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
    float r,area;
    printf("\nwrite radius of circle");
    scanf("%f",&r);
    area=PI*r*r;
    printf("\narea of circle is %0.2f",area);
    getch();

}