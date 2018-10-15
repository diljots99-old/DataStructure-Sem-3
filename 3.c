/*
*Linear Search in array
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int size,Elements,Item,Status=0,ArrayLocation,MemoryLocation;
    printf("Enter the size of array = ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the no. of Elements = ");
    scanf("%d",&Elements);
    for(int i=0;i<Elements;i++)
    {
        scanf("%d",&array[i]);

    }
    printf("Your Entered ");
    for(int i=0;i<Elements;i++)
    {
        printf("\t%d",array[i]);
    }
    printf("\nEnter item you want to search = ");
    scanf("%d",&Item);
    for(int i=0;i<Elements;i++)
    {
        if(Item==array[i]){
            Status=1;
            ArrayLocation=i+1;
            MemoryLocation&array[i];
        }
    }
    if (Status==1){
        printf("\nItem Found");
        printf("\nItem Location in array %d",ArrayLocation);
        printf("\nItem Location in Memory %d",MemoryLocation);
    }

     else{
            printf("\nItem Not found");
        }
    getch();
}
