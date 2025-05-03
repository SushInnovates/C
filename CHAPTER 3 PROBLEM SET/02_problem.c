#include <stdio.h>

int main(){
    int marks1,marks2,marks3,average;

    printf("Enter Marks For Each subject :\n");
    printf("MARKS 1 = ");
    scanf("%d",&marks1);
    printf("MARKS 2 = ");
    scanf("%d",&marks2);
    printf("MARKS 3 = ");
    scanf("%d",&marks3);

    average = (marks1+marks2+marks3)/3;
    printf("The marks are %d %d and %d\n",marks1,marks2,marks3);

    if(marks1 < 33 || marks2 < 33 || marks3 < 33)
    {
        printf("You are Failed due to passing criteria marks for each subjectdidnt meet\n");
    }
    else if(average < 40)
    {
        printf("You are Failed due to passing criteria marks for each subjectdidnt meet\n");
        
    }
    else
    {
        printf("You are passed !");
    }
    return 0;
}