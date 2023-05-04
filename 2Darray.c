#include<stdio.h>
#include<conio.h>
void main()
{
    int a[2][2],i,j,b[2][2],k,z[2][2];
    //for 1st matrix
      printf("Enter the elements of the First matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }   
    }
 
    //for 2nd matrix
      printf("Enter the elements of the second matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    
    printf("your 2x2 matrix is :\n");
       //display matrix 1
        for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++) 
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
     //display matrix 2
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++) 
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    //for multiplication of matrix
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            z[i][j]=0;
            for(k=0;k<2;k++)
            {
                z[i][j]+=a[i][k]*b[k][j];
            }
            
        }
    }
    
    //for print answer of matrix
    printf("your multiplication of matrix:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++) 
        {
            printf("%d ",z[i][j]);
        }
        printf("\n");
    }
getch();
}