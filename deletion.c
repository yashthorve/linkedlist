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
//deletion of first node
struct node *Deletefirst(struct node *head)
{
    struct node *ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
//deletion from between
struct node *Deletebetween(struct node *head,int index)
{
    
    struct node *p=head;
    struct node *q=head->next;
    for (int  i = 0; i <index-1; i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;

}
//delete at last
struct node *DeleteLast(struct node *head)
{
    
    struct node *p=head;
    struct node *q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;

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

    second->data=16;
    second->next=third;

    third->data=24;
    third->next=NULL;

    printf("Linked list before deletion\n");
    linkedlistTraversal(head);
    // head=Deletefirst(head);
    head=Deletebetween(head,2);
     //head=DeleteLast(head);
    
    printf("Linked list after deletion\n");
    linkedlistTraversal(head);

    return  0;



}