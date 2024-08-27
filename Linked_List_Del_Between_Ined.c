#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node * ptr) {
    while (ptr!=NULL) {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

// case 2: Deleting the element at a given Index
struct Node * DeleteatIndex(struct Node*head,int index)
{
    struct Node * p = head;
    struct Node * q = head->next;

    for (int i=0;i<index-1;i++)  {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);

    return head;

};


int main () {
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

    printf("Before Deleting: \n");

    linkedListTraversal(head);

    head=DeleteatIndex(head,1);

    printf("After Deleting: \n");
    linkedListTraversal(head);



}

