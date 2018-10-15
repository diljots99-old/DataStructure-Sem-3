/*Search Linked List*/
#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
//#include <cstdlib>

//Linked List is declared here
struct node
{
    int info;
    struct node *link;
};
struct node *first;

void main()
{
    char ch,chx,chz;
    void create();
    void print();
    int search(int x);
    create();
    printf("\nPress (Y/N) for printing linked list\n");
    ch =getch();
    if(ch=='Y'||ch=='y')
    {
        printf("Your Linked List\n");
        print();
    }
    printf("\nPress (Y/N) for Searching item in Linked list");
    chz =getch();
    if(chz=='Y'||chz=='y')
    {
        int f,k;
        printf("\nEnter the item You want to search = ");
        scanf("%d",&k);
        f=search(k);
        if(f==0)
        printf("\nItem not found");
    }
    printf("\nPress (Y/N) if you want to restart\n");
    chx=getch();
    if(chx=='y'||chx=='Y')
    {
        system("cls");
        main();
    }
    getch();
}
/*
create() function helps us to create Linked list(of desired length)
and insert data node by node
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
        ptr=ptr->link;
    }

}
/*
search() function helps to search the item in linked list
*/
int search(int x)
{
    int f=0;
    struct node *ptr;
    ptr=first->link;
    while(ptr)
    {
        if(x==ptr->info)
        {
            f=1;
            printf("\nItem Found");
            printf("\nItem Found at Memory Address = %d",&ptr->link);
        }
        ptr=ptr->link;
    }
   return f;
}
