#include<stdio.h>
#include<stdlib.h>


struct node {
    int data;
    struct node* left;
     struct node* right;

};
     struct node* Create(int data)
     {
        struct node* n;
        n=(struct node*) malloc(sizeof(struct node));
        n->left=NULL;
        n->right=NULL;
        n->data=data;
        return n;
    }
    void Preorder(struct node* root)
    {
        if(root!=NULL){
        printf("%d \n",root->data);
        Preorder(root->left);
        Preorder(root->right);
}
    }
    void Postorder(struct node* root)
    {
        if(root!=NULL)
        {
            Postorder(root->left);
            Postorder(root->right);
            printf("%d",root->data);

        }
    }
    void Inorder(struct node* root)
    {
        if(root!=NULL)
        {
            Inorder(root->left);
            printf("%d",root->data);
            Inorder(root->right);

          }  }

int  main()
{

   
        struct node*p=Create(4);
        struct node*p1=Create(1);
        struct node*p2=Create(6);
        struct node*p3=Create(5);
        struct node*p4=Create(2);
       
    
    
    
    
    
    //linking the nodes 
            p->left=p1;
            p->right=p2;
            p1->left=p3;
            p1->right=p4;


           //Preorder(p);
            //Postorder(p);
            Inorder(p);

    return 0;


}






