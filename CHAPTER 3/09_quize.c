#include <stdio.h>

int main(){
    int mark;
    char grade;

    printf("Enter marks = ");
    scanf("%d",&mark);

    if(mark <= 100 && mark >=90)
    {
        grade = 'A';
        printf("Your Grade is  %c",grade);
    }
    else if(mark <= 90 && mark >=80){
        grade = 'B';
        printf("Your Grade is %c",grade);
    }
    else if(mark <= 80 && mark >=70){
        grade = 'C';
        printf("Your Grade is %c",grade);
    }
    else if(mark <= 70 && mark >=60){
        grade = 'D';
        printf("Your Grade is %c",grade);
    }
    else if(mark <= 60 && mark >=50){
        grade = 'E';
        printf("Your Grade is %c",grade);

    }
    else
    {
        grade = 'F';
        printf("You are failed - %c",grade);
    }
    return 0;
}