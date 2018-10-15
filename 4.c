/*
*Creation of Linked List
*/
#include "stdio.h"
#include "conio.h"
#include "stdlib.h"

//Linked List is declared here

struct node
{
    int info;
    struct node *link;
};
struct node *first;

void main()
{
    char ch;
    void create();
    create();
    void print();
    printf("\nPress (Y/N) for printing linked list\n");
    ch =getch();
    if(ch=='Y'||ch=='y')
    {
        printf("Your Linked List\n");
        print();
    }
    getch();
}
/*
create() function helps us to create Linked list
(of desired length) and insert data node by node
*/
void create()
{
    struct node *ptr,*cpt;
    char ch;
    ptr =(struct node*) malloc (sizeof (struct node));
    printf("Input First Node information = ");
    scanf("%d",&ptr->info);
    first=ptr;
    do
    {
        cpt=(struct node*) malloc(sizeof (struct node));
        printf("\nInput next node information = ");
        scanf("%d",&cpt->info);
        ptr->link =cpt;
        ptr = cpt;
        printf("Press (Y/N) for more node ");
        ch =getch();
    }
    while(ch=='Y'||ch=='y');
    ptr->link = NULL;
}
/*
print() function helps us in traversing the linked list
and printing the data in it
*/
void print()
{
    struct node *ptr;
    printf("\n%d ",first->info);
    ptr=first->link;
    while(ptr)
    {
        printf("%d ",ptr->info);
        printf("%d ",ptr->link);
        ptr=ptr->link;
    }
}
