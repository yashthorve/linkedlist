#include<stdio.h>

//Traversal of array
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
int indinsertion(int arr[],int index,int element,int size,int capacity)
{
    if(size>=capacity){
        return -1;
    }
    else{
     for (int i =size-1; i>=index; i--)
     {
        arr[i+1]=arr[i]; //3 ->2
     }
       arr[index]=element;
       return 1;
     
    }
}

int main()
{
  int arr[100]={2,3,6,34,5};
  int capacity=100;
  int index=2,element=60,size=5;
  printf("Array before insertion \n");
  display(arr,5);
    indinsertion(arr,index,element,size,capacity);
     printf("Array after insertion \n");
    size+=1;
    display(arr,6);
  
  

  return 0;  
}
