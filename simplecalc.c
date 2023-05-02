#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,z;
    char a;
    printf("choice which opretor do you want");
    scanf("%c",&a);
    printf("enter value of x and y");
    scanf("%d%d",&x,&y);
    if(a=='+'){
        z=x+y;
        printf("addition is %d",z);
    }
    else if(a=='-'){
        z=x-y;
        printf("substraction is %d",z);
    }
    else if(a=='*'){
        z=x*y;
        printf("multiplication is %d",z);
    }
    else if(a=='/'){
        z=x/y;
        printf("division is %d",z);
    }
    else if(a=='%'){
        z=x%y;
        printf("modulo is %d",z);
    }
    else{
        printf("not valid");
    }
    getch();
}