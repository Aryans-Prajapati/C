#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int ch,z,x,y;
    do{
    printf("\nwhich operation do you want \n1.addition \n2.substraction \n3.multiplication \n4.division \n5.modulodiv \n6.exit");
    scanf("%d",&ch);
    printf("write avalue of x and y");
    scanf("%d%d",&x,&y);
    switch(ch)
    {
        case 1 : z=x+y;
            printf("addition is %d",z);
            break;
        case 2 : z=x-y;
            printf("substraction is %d",z);
            break;
        case 3 : z=x*y;
            printf("multiplication is %d",z);
            break;
        case 4 : z=x/y;
            printf("division is %d",z);
            break;
        case 5 : z=x%y;
            printf("modulodiv is %d",z);
            break;
        case 6 : 
        exit(0);

        default:
        printf("enter proper choice");    
    }
    }while(ch!=6);
getch();
}