#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
int search(int );
struct node
{
    int info;
    struct node *link;
};
struct node *first;

void main()
{
    int s,d;
    char ch;
    void create();
    void print();
    create();
    printf("\nPress (Y/N) for printing linked list\n");
    ch =getch();
    if(ch=='y')
    {
        printf("your linked list is =  \n");
        print();
    }
    printf("\nEnter the Item = ");
    scanf("%d",&s);
    d=search(s);
    if(d==0)
    {
        printf("Item not found. ");
    }
      getch();
}
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


