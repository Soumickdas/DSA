#include <stdio.h>
#include <stdlib.h>
 struct Node
 {
   int data;
   struct Node * next;  
 };

 void linkedListTraversal(struct Node * ptr) {
    while (ptr!=NULL) {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node * insertDataEnd(struct Node*head,int data)  {
    struct Node * ptr=(struct Node *) malloc(sizeof (struct Node));
    struct Node * p = head;
    ptr -> data=data;

while (p->next!=NULL)
{
    p=p->next;
}
p->next=ptr;
ptr->next=NULL;
return head;


    ptr -> data=data;
    return ptr;
}


 int main ()  {
    struct Node * head;
    struct Node * second;
    struct Node * third;
    head = (struct Node *) malloc(sizeof (struct Node));
    second = (struct Node *) malloc(sizeof (struct Node));
    third = (struct Node *) malloc(sizeof (struct Node));

     head ->data=7;
    head ->next=second;

    second ->data=11;
    second ->next=third;

    third ->data=69;
    third ->next=NULL;

printf("Brfore insertion: \n");
    linkedListTraversal(head);
    printf("After insertion: \n");
    head=insertDataEnd(head,45);
    linkedListTraversal(head);
 }
 