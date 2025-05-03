#include <stdio.h>

int main(){
    //to calculate area of circle
    int r,area,h,volume;
    printf("Enter Radius for circle:");
    scanf("%d",&r);
    printf("Enter height for cylinder:");
    scanf("%d",&h);
    area = 3.14 * r * r;
    volume = 3.14*r*r*h;
    printf("Area of circle = %d",area);
    printf("Volume of cylinder = %d",volume);
    return 0;
}