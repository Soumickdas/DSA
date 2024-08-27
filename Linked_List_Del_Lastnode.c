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

// case 3: Delte the last element

struct  Node * DelteLastnode(struct Node * head) {
    struct Node * p=head;
    struct Node *q=head->next;
    while(q->next!=NULL) {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
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

    printf("Linked list before deleateion: \n");
    linkedListTraversal(head);

head=DelteLastnode(head);

    printf("Linked list after deleateion: \n");
    linkedListTraversal(head);



}

