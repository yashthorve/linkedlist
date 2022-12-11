#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
//creating a linked list
struct node{
    int data;
    struct node *next;
};
//traversing the linked list
void linkedlistTraversal(struct node* ptr)
{
    while (ptr!=NULL)
    {
       printf("Element is %d\n",ptr->data);
        ptr = ptr->next; 
    }
    
   
}
void search(struct node *head,int n)
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        if(ptr->data==n){
            printf("Found succesfully!");
            return ;
        }
        else if (ptr->data > n) 
        
        { 
            break; 
        }
        ptr=ptr->next;
    }
    printf("Search not successfull");
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    //dynamic allocation for nodes in heap
    head=(struct node*)malloc((sizeof(struct node)));
    second=(struct node*)malloc((sizeof(struct node)));
    third=(struct node*)malloc((sizeof(struct node)));

    //now nodes will point towards each other
    head->data=12;
    head->next=second;

    second->data=40;
    second->next=third;

    third->data=24;
    third->next=NULL;

    printf("Linked list created successfully\n");
    //linkedlistTraversal(head);
    search(head,12);
    

    return  0;



}
