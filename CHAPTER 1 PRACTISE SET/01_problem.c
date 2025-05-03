#include<stdio.h>
int main()
{
    //to calculate area of rectangle
    int l,b,area;
    printf("Enter Length of Rectangle = ");
    scanf("%d",&l);
    printf("Enter Breadth of Rectangle = ");
    scanf("%d",&b);
    area = l * b;
    printf("Area of Rectangle = %d",area);

    return 0;
}

