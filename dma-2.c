#include<stdio.h>
#include<stdlib.h>
int main()
{
     int *ptr;
     int n,n2,i;
     printf("Enter the no of elements:");
     scanf("%d",&n);
     ptr=(int*)malloc(n*sizeof(int));
     //printf("Enter the array elements:");
     if(ptr==NULL)
        {
            printf("Memory not allocated");
        }
    else{
        printf("MEMORY ALLOCATED SUCCESSFULLY \n");
    }
   printf("Enter the array elements");
        for(i=0;i<n;i++)
        {
            ptr[i]=i+1;  
            //scanf("%d",ptr[i]);
        }  
       for ( i = 0; i < n; i++)
       {
        /* code */ printf(" %d\n",ptr[i]);
       }
       
     
        //for (int i = 0; i < n; i++)
         //{
          //printf("%d \n",  ptr+i);
        //}
        //printf("Enter the new size of array");
        //scanf("%d",&n2);
       //  ptr =  realloc (ptr,n2 * sizeof(int));
    
     // printf("nEWLY ALLOCATED MEMORY addresses ARE");
     // for ( int i = 0; i <n2; i++)
      //{
        //printf("%d",ptr+i);
     // }
      //free(ptr);
            
        return 0;
        

}