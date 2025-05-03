#include <stdio.h>

int main(){
    // to get greatest number from 4 numbers

    int n1,n2,n3,n4;
    printf("Enter Value For n1 =\n");
    scanf("%d",&n1);
    printf("Enter Value For n2 =\n");
    scanf("%d",&n2);
    printf("Enter Value For n3 =\n");
    scanf("%d",&n3);
    printf("Enter Value For n4 =\n");
    scanf("%d",&n4);

    if(n1>n2 && n1>n3 && n1>n4){
        printf("%d is greatest number among these !",n1);
    }
    else if(n2 > n1 && n2>n3 && n2>n4)
    {
        printf("%d is greatest number among these !",n2);
    }
    else if(n3>n1 && n3>n2 && n3>n4){
        printf("%d is greatest number among these !",n3);
    }
    else{
        printf("%d is greatest number among these !",n4);
    }
    return 0;
}