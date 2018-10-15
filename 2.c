/*
*Deletion in Array
*/
#include "stdio.h"
#include "conio.h"

void main()
{
        int k,i=0,n;
        printf("Enter the Number Elements = ");
        scanf("%d",&n);
        int A[n];
        printf("Enter the Your Elements = \n");
        for(i;i<n;i++)
        {
            scanf("%d",&A[i]);
        }
        printf("You Entered \n");
        for(i=0;i<n;i++)
        {
            printf("%d\t",A[i]);
        }
        printf("\nEnter the place of deletion = ");
        scanf("%d",&k);
        for(int j=k-1;j<n;j++)
        {
            A[j]=A[j+1];
        }
        printf("New Array \n");
        for(i=0;i<n-1;i++)
        {
             printf("%d\t",A[i]);
        }
        getch();
}

