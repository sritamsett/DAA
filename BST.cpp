#include <iostream>
#include<stdlib.h>
#include<cstddef> 
using namespace std;
struct Node {
   int data;
   struct Node *leftChild, *rightChild;
};
Node *root = NULL;
Node *newNode(int item){
   Node *temp = (Node *)malloc(sizeof(Node));
   temp->data = item;
   temp->leftChild = temp->rightChild = NULL;
   return temp;
}
void insert(int data){
   Node *tempNode = (Node*) malloc(sizeof(Node));
   Node *current;
   Node *parent;
   tempNode->data = data;
   tempNode->leftChild = NULL;
   tempNode->rightChild = NULL;
   
   //if tree is empty
   if(root == NULL) {
      root = tempNode;
   } else {
      current = root;
      parent = NULL;
      while(1) {
         parent = current;
         
         //go to left of the tree
         if(data < parent->data) {
            current = current->leftChild;
            
            //insert to the left
            if(current == NULL) {
               parent->leftChild = tempNode;
               return;
            }
         }//go to right of the tree
         else {
            current = current->rightChild;
            
            //insert to the right
            if(current == NULL) {
               parent->rightChild = tempNode;
               return;
            }
         }
      }
   }
}
Node* search(int data){
   Node *current = root;
   while(current->data != data) {
         //go to left tree
         if(current->data > data) {
            current = current->leftChild;
         }//else go to right tree
         else {
            current = current->rightChild;
         }
         
         //not found
         if(current == NULL) {
            return NULL;
         }
   }
   return current;
}
void printTree(Node* Node) {
    if (Node == NULL)
        return;
    printTree(Node->leftChild);
    cout << " --" << Node->data;
    printTree(Node->rightChild);
}
int main(){
   insert(55);
   insert(20);
   insert(90);
   insert(50);
   insert(35);
   insert(15);
   insert(65);
   cout<<"Insertion done";
   cout<<"\nBST: "<<endl;
   printTree(root);
   struct node* k;
   int ele = 35;
   cout<<"\nElement to be searched: "<<ele;
   Node* result = search(35);
   if(k != NULL)
      cout<<"\nElement "<<result->data<<" found ";
   else
      cout<<"\nElement not found";
   return 0;
}
