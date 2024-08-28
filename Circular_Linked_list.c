#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

void LinkedlistTraversal(struct Node*head) {
    struct Node*ptr=head;
    do {
        printf("Element is:%d\n",ptr->data);
        ptr=ptr->next;
    }while (ptr!=head);
}

struct Node*InsertatFirst(struct Node*head,int data)  {
    struct Node*ptr = (struct Node *) malloc(sizeof (struct Node));
    ptr->data=data;
    struct Node*p=head->next;
    while (p->next!=head) {
        p=p->next;
    }
    //Write now p is pointing on last node of circular linked list
    p->next=ptr;
    ptr->next=head;
    head = ptr;
    return head;
    
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
    third ->next=head;

    printf("Brfore insertion: \n");
    LinkedlistTraversal(head);
    head=InsertatFirst(head,17);
    printf("After insertion: \n");
    LinkedlistTraversal(head);


}