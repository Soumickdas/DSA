#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};


void linkedListTraversal(struct Node * ptr) {
    while (ptr!=NULL) {
        printf("%d\n",ptr -> data);
        ptr = ptr -> next;
    }
}

struct Node * insertDataIndex(struct Node *head,int data,int index) {
     struct Node * ptr=(struct Node *) malloc(sizeof (struct Node));
     struct Node * p = head;
     int i=0;
     while (i!=index-1) {
        p = p->next;
        i++;
     }
     ptr-> next = p-> next;
     p-> next=ptr;
     ptr ->data=data;
     return head;

}

int main ()  {
    struct Node * head;
    struct Node*second;
    struct Node*third;

    head = (struct Node *) malloc(sizeof (struct Node));
    second = (struct Node *) malloc(sizeof (struct Node));
    third = (struct Node *) malloc(sizeof (struct Node));

    head -> data=17;
    head -> next=second;
    second -> data=89;
    second -> next=third;
    third -> data=69;
    third -> next=NULL;

     linkedListTraversal(head);
     head=insertDataIndex(head,87,1);
     linkedListTraversal(head);
   
    
}
