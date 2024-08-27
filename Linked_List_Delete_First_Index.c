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

// case 1: Deleting the first element in the linked list

struct Node * Deletefirst(struct Node * head)  {

    struct Node * ptr=head;
    head=head->next;
    free(ptr);

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

    head=Deletefirst(head);

    printf("Linked list after deleateion: \n");
    linkedListTraversal(head);



}

