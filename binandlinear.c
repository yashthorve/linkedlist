        #include<stdio.h>

        int LinearSearch(int arr[],int size,int element)
        {
            for(int i=0;i<size;i++)
            {
                if(arr[i]==element)
                return i;
            }
            return -1;
        }
        int BinarySearch(int arr[],int size,int element)
        {


            int low,high,mid;
            low=0;
            high=size-1;
            //searching starts
            while(low<=high)
            {
                mid=(low+high)/2;
                if(arr[mid]==element)
                {
                    return mid;
                }
                if (arr[mid]<element)

                {
                    low=mid+1;

                }
                else{
                    high=mid-1;
                }
            
            
        }//searching stops
            return -1;
        }


        int main()
        {
            //for binary search sorted array
            int size,element;
            int arr[50];
            printf("Enter the no of array elements:");
            scanf("%d",&size);
            printf("Enter the array elements:");
            for(int i=0;i<size;i++)
            {
                scanf("%d",&arr[i]);
            }
            printf("following r ur entered elements");
            for(int i=0;i<size;i++)
            {
                printf("%d \n",arr[i]);
    }
            printf("Enter the element to search");
            scanf("%d",&element);
            int search=BinarySearch(arr,size,element);
            printf("Element %d found at index %d",element,search);
            return 0;
}