#include<stdio.h>
#include<stdlib.h>


int main()
{
     int *ptr;
     int n,i;
     printf("Enter the no of elements:");
     scanf("%d",&n);
     ptr=(int*)malloc(n*sizeof(int));
     printf("Enter the array elements:");
     if(ptr==NULL)
        {
            printf("Memory no allocated");
        }
    else{
        printf("MEMORY ALLOCATED SUCCESSFULLY \n");
    }
        for(i=0;i<n;i++)
        {
            ptr[i]=i+1;
        }
        for ( i = 0; i < n; i++)

        {
          printf(" %d",ptr[i]);
        }
        return 0;
        

}