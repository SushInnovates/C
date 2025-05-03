#include<stdio.h>
int main()
{
    char val;
    printf("Enter Character to know if the value is Uppercase or Lowercase !\n");
    printf("Enter a character = \n");
    scanf("%c",&val);
    

    if(val >= 'A' &&  val <='Z' )
    {
        printf("The %c is a uppercase Character ",val);
    }
    else if(( val >= 'a' && val <='z'))
    {
        printf("The %c is Lowercase Character ",val );
    }
    else
    {
        printf("The Value is not character ");
    }
    return 0;
}