/*
*Deletion Linked List
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
struct node *start;

void main()
{
     char ch,chx;
	 void create();
	 void print();
	 void deletion(int n);
	 int search(int x);
	 int n;
	 create();
	 printf("\nPress (Y/N) for printing linked list\n");
	 ch =getch();
	 if(ch=='Y'||ch=='y')
	 {
		  printf("Your Linked List\n");
		  print();
	 }
	 printf("\nEnter the Location of Deletion = ");
	 scanf("%d",&n);
	 deletion(n);
	 printf("\nPress (Y/N) for printing linked list\n");
	 ch =getch();
	 if(ch=='Y'||ch=='y')
	 {
		  printf("Your Linked List\n");
		  print();
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
	 start=ptr;
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
	 printf("\n%d ",start->info);
	 ptr=start->link;
	 while(ptr)
	 {
		  printf("%d ",ptr->info);
		  ptr=ptr->link;
	 }

}
void deletion(int n)
{
	struct node *ptr,*cpt;
	int i=2;
	if (n==1)
	{
		start=start->link;
	}
	else if (n !=1)
	{
		 cpt=start;
		 ptr=start->link;
		 do
		 {
			if(i==n)
			{
				cpt->link=ptr->link;
			}
			cpt=cpt->link;
			ptr=ptr->link;
			i++;
		 }while(ptr);
	}
}
/*
search() function helps to search the item in linked list
*/
int search(int x)
{
	 int f=0;
	 struct node *ptr;
	 ptr=start->link;
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
