/*
-------------------------------------------------------
Name         : Star Pattern
Author       : Kushal Singh Rathore
Discription  : Printing Stars(Right Triangle)
-------------------------------------------------------
*/

#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        for(int j=i;j<=a;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}