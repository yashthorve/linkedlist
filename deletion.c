#include<stdio.h>

//Traversal of array
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
    void deletion(int arr[],int index,int size)
{
    
     for (int i = index; i<size-1; i++)
     {
        arr[i]=arr[i+1];// 2->3
     }
       
}

int main()
{
  int arr[100]={2,3,6,34,5};

  int index=0,size=5;
  printf("Array before deletion \n");
  display(arr,5);
    deletion(arr,index, size);
    printf("Array after deletion \n");
    size-=1;
    display(arr,4);
  
  

  return 0;  
}
