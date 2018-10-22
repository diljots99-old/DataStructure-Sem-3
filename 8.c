/*
*Stack Push and pop
*/
#include "stdio.h"
#include "conio.h"
#define MAX 5

int top=-1 ,stack[MAX];
void push()
{
    int val;
    if(top==MAX-1)
    {
        printf("\nStack is full");
    }
    else
    {
        printf("\nEnter Element to push  : - ");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
    }
}
int pop()
{
    if(top==-1)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\nPopped Element is %d\n",stack[top]);
        return stack[top];
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("\nStack is empty");
    }
     else
    {
        printf("\nStack is .....\n");
        for(int j =top;j>=0;j--)
        {
            printf("%d ",stack[j]);
        }
        printf("\n");
    }
}
int main()
{
    int ch;
    printf("\nSTACK PUSH & POP \n1.Push\n2.Pop\n3.Display\n4.Exit\n");
    while(1)
    {
        printf("Enter your choice (1-4): " );
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
                break;
            case 2:pop();
                break;
            case 3:display();
                break;
            case 4:exit(0);
                break;
            default:printf("Wrong Choice\n");
                break;

        }
    }
}
