/*Insertion Linked List*/
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
    int n;
    char ch;
    void create();
    create();
    void print();
    void insertion(int n);
    printf("\nPress (Y/N) for printing linked list\n");
    ch =getch();
    if(ch=='Y'||ch=='y')
    {
        printf("Your Linked List\n");
        print();
        ch='n';
    }
    printf("\nEnter The Location =");
    scanf("%d",&n);
    insertion(n);
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
print() function helps us in traversing the
linked list and printing the data in it
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

void insertion(int n)
{
    struct node *ptr,*cpt,*NEW;
    ptr=first->link;
    if(n==1)//insert as First Node
    {
        NEW=(struct node*) malloc(sizeof (struct node));
        printf("\nInput next node information = ");
        scanf("%d",&NEW->info);
        NEW->link=first;
        first=NEW;
    }
    else
    {    int i=2;
         cpt=first;
		 ptr=first->link;
		 do
		 {
			if(n==i)//Insert after Given Node
			{
				NEW=(struct node*) malloc(sizeof (struct node));
                printf("\nInput next node information = ");
                scanf("%d",&NEW->info);
                NEW->link=ptr;
                cpt->link=NEW;
			}
			cpt=cpt->link;
			ptr=ptr->link;
			i++;
		 }while(ptr);
		if(n==i)//Insert as Last Node
        {
                NEW=(struct node*) malloc(sizeof (struct node));
                printf("\nInput next node information = ");
                scanf("%d",&NEW->info);
                cpt->link=NEW;
                NEW->link=NULL;
        }
        else if(n>i)
        {
            printf("\nEnter Location carefully");
        }
    }
}
