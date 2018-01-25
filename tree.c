#include<stdio.h>
#include<stdlib.h>
struct Tree{
    int data;
    struct Tree *left,*right;
};
struct Tree* newnode(int data){
    struct Tree* Tree=(struct Tree*)malloc(sizeof(struct Tree));
    Tree->data=data;
    Tree->left=NULL;
    Tree->right=NULL;
    return(Tree);
}
int main() {
    int d;
    printf("\nEnter Data: ");
    scanf("%d",&d);
    struct Tree *temp;
    temp=root;
    
    struct Tree *root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    printf("%d",root->left->data);
    return 0;

}



Language Version: GCC 5.3.0