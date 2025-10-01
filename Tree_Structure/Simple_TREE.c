#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *RIGTH,*LEFT;

};

int main(){
    struct Node *Root = (struct Node*)malloc(sizeof(struct Node));
    Root->data = 2;
    Root->RIGTH =(struct Node*)malloc(sizeof(struct Node));
    Root->LEFT =(struct Node*)malloc(sizeof(struct Node));
    Root->RIGTH->data = 11;
    Root->LEFT->data = 2004;

    printf("ROOT : %d  ROOT : %d  ROOT : %d",Root->data,Root->RIGTH->data,Root->LEFT->data);

    return 0;

}
