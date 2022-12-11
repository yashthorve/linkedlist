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
//insertion at beginning
struct node *Insertfirst(struct node *head,int data)
{
    
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}
//insertion in between
struct node *Insertindex(struct node *head,int data , int index)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

//insertion from end
struct node *Insertend(struct node *head,int data)
{
    
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    ptr->data=data;
    p->next=ptr;
    ptr->next=NULL;
    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    //dynamic allocation for nodes in heap
    head=(struct node*)malloc((sizeof(struct node)));
    second=(struct node*)malloc((sizeof(struct node)));
    third=(struct node*)malloc((sizeof(struct node)));
    fourth=(struct node*)malloc((sizeof(struct node)));

    //now nodes will point towards each other
    head->data=12;
    head->next=second;

    second->data=16;
    second->next=third;

    third->data=24;
    third->next=fourth;
    fourth->data=199;
    fourth->next=NULL;

    printf("Before Insertion\n");
    linkedlistTraversal(head);
    head=Insertfirst(head,35);
   // Insertend(head,70);
    printf("After Insertion\n");
    linkedlistTraversal(head); 
    //Insertindex(head,40,2);
    //printf("After index insertion\n");
   //linkedlistTraversal(head); 
    return  0;



}