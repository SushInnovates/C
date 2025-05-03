#include <stdio.h>

int main(){
    int i = 10;
    int j = i;
    int a = 10 , b = 20 , c = 30 , d = 40;
    printf("the value of i is %d and the value of j is %d \n",i,j);
    printf("the value of a is %d and the value of b is %d \n",a,b);
    printf("the value of c is %d and the value of d is %d ",c,d);

    return 0;
}


/*
operator precidence

1st priority is * / %  and its associativy is left to right
2nd priority is + -     and its associativy is left to right
3rd priority is =       
 it will give priority in ABSENCE OF PARENTHESIS

pro tip - always use parenthesis
*/