/*
*program to find factorial with functions....... :-)
*/
#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"
#include "string.h"

#define SIZE 100

char Stack[SIZE];
int top = -1;
/* deine push opreation */

void push (char item )
{
    if (top >=Size-1)
    {   
        printf("\n Stack Overflow.");
        
    }
    else
    {
        top = top + 1;
        Stack[top] = item
    }
}

//define pop opreation 
char pop()
{
    char item;
    if (top<0)
    {
        printf("\n Stack Underflow ; invaild Infix Expression");
        getchar();
        exit(1);
    }
    else
    {
        item = Stack[top];
        top = top-1;
        return(item);
    }
}

int is_operator(char symbol)
{
    if(symbol == '^'|| symbol == '+' || symbol == '/' || symbol == '*' ||symbol == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int precednece( char symbol)
{
    if (symbol =='^')
    {
        return(3);
    }
    else if (symbol == '*' || symbol == '/')
    {
        return(2);
    }
    else if (symbol == '+' || symbol == '-')
    {return(1)}
    else
    {
        return (0);
    }
}

void InfixtoPostfix(char infix_exp[], char post_exp[]);
{
    int i ,j;
    char item;
    char x;

    push('(');
    strcat(infix_exp,")");

    i =0 ;
    j=0;
    item=infix_exp[i];

    while(item != 0)
    {
        {
            push(item)
        }
    }
    else if (item == ')')
    {
            x = pop (0;
            while())
    }

}




if (top > 0)
{
    printf("\n Invaild Infix expression . \n")

    getchar();
    exit(1);

}
postfix_exp[j]= '\0';




int main(int argc, char const *argv[])
{
    char infix[SIZE],postfix[SIZE];
    printf("ASSUMPTION : infix expression contains Single Letter varriable and Singledigit Contatn only .\n");
    printf("\nENte rIn Fix Expression :")
    gets(infix)

    InfixtoPostfix(infix,postfix);
    printf("Postfix Expression :" );
    puts(postfix);
    return 0;
}
