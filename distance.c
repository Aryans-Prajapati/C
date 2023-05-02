#include<stdio.h>
#include<conio.h>
void main()
{
    float km, m, ft, in, cm;
    printf("Enter the distance between two cities (in km): ");
    scanf("%f", &km);
    m = km * 1000;
    ft = km * 3280.84;
    in = ft * 12;
    cm = m * 100;
    printf("Distance in meters: %.2f m\n", m);
    printf("Distance in feet: %.2f ft\n", ft);
    printf("Distance in inches: %.2f in\n", in);
    printf("Distance in centimeters: %.2f cm\n", cm);
getch();
}