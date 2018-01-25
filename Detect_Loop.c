#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* newnode(int data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
void detectLoop(struct node *root){
    struct node *temp1,*temp2;
    temp1=root;
    temp2=root->next->next;
    int flag=0;
    while(1){
        if(temp2==NULL || temp2->next==NULL){
            flag=0;
            break;
        }
        if(temp1==temp2){
            flag=1;
            break;
        }
        else{
            temp1=temp1->next;
            temp2=temp2->next->next;
        }
    }
    if(flag==1)
        printf("\nLoop detected");
    else
        printf("\nLoop not detected");
    
}
int main() {
   int n,data;
   struct node *nodetemp,*temp;
   struct node *root;
   root=(struct node*)malloc(sizeof(struct node));
   root=NULL;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
       scanf("%d",&data);
       nodetemp=newnode(data);
       if(root==NULL)
            root=nodetemp;
        else{
            temp=root;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=nodetemp;
        }
   }
   temp=root;
   struct node *prev;
   while(temp->next!=NULL){
       prev=temp;
       temp=temp->next;
   }
   temp->next=newnode(4);
   temp->next->next=newnode(5);
   temp->next->next->next=prev;
   temp=root;
   /*while(temp!=NULL){
       printf("%d ",temp->data);
       temp=temp->next;
   }*/
   detectLoop(root);
}



Language Version:  GCC 7.2.0