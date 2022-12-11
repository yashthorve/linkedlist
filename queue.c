#include<stdio.h>
#include<stdlib.h>


struct queue{
    int size;
    int r;
    int f;
    int *arr;
};
//insertion of element in queue 
//creating is full
int isfull(struct queue *q)
{
    if(q->r==q->size-1){
    return 1;
    }
    else{
        return 0;
    }
}


//creating enqueue function 
void enqueue(struct queue *q,int val)
{
    if(isfull(q)){
        printf("This queue is full ");
    }
    else{
        q->r++;
        q->arr[q->r]=val;
        printf("Enqueued element %d",val);
    }
}

//dequeuing or deletion of element from a queue

//creating is Empty 

int isEmpty(struct queue *q)
{
if(q->r=q->f)
{
    return 1;

}
return 0;
}
 int dequeue(struct queue *q)
 {
    int a=-1;
    if(isEmpty(q)){
        printf("Queue is empty");

    }
    else{
        q->f++;
        a=q->arr[q->f];
    }
    return a;

        
}

//main function 
    int main()
{
    struct queue q ;
    q.size=2;
    q.f=0;
    q.r=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));
    enqueue(&q,17);
    enqueue(&q,15);
    printf("Dequing element %d",dequeue(&q));
    printf("Dequing element %d",dequeue(&q));
    

if(isEmpty(&q))
{
    printf("Queue is empty");
}
if(isfull(&q))
{
    printf("Queue is full");
}
 
return 0;

}


