/*
*Insertion in array
*/
#include "stdio.h"
#include "conio.h"

void main()
{
        int k,i=0,n;
        printf("Enter the Size of array = ");
        scanf("%d",&n);
        int A[n];
        printf("Enter the Your Elements = \n");
        for(i;i<n;i++)
        {
            scanf("%d",&A[i]);
        }
        printf("You Entered\n");
        for(i=0;i<n;i++)
        {
            printf("%d\t",A[i]);
        }
        printf("\nenter the place where New element is inserted = ");
        scanf("%d",&k);
        int a=n+0;
        for(int j=n;j>=k-1;j--)
        {
            A[j+1]=A[j];

        }

        printf("Enter The new Element = ");
        scanf("%d",&A[k-1]);
        printf("\nNew Array\n");
        for(i=0;i<n+1;i++)
        {
             printf("%d\t",A[i]);
        }
        getch();
}

