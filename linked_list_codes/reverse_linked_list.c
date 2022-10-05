#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node* insert_beginning(struct Node* head){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    int data;
    printf("Enter the data to enter:");
    scanf("%d",&data);
    new_node->data = data;
    new_node->next = head;
    head = new_node;
    return head;
}

void traverse(struct Node* head){
    struct Node* ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

struct Node* reverse_iterative(struct Node* head){
    struct Node *left, *current, *right;
    left = NULL;
    current = head;
    right = NULL;

    while(current!=NULL){
        right = current->next;
        current->next = left;

        left = current;
        current = right;
    }

    return left;
}

struct Node* reverse_recursive(struct Node* head){
    if((head==NULL) || (head->next==NULL)){
        return head;
    }
    else{
        struct Node* newHead = reverse_recursive(head->next);
        head->next->next = head;
        head->next = NULL;

        return newHead;
    }
}

int main(){
    struct Node *head = NULL;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    // just inserting at front for simplicity
    for(int i=0;i<n;i++){
        head = insert_beginning(head);
    }

    printf("Before reversing: ");
    traverse(head);

    head = reverse_iterative(head);

    printf("After reversing: ");
    traverse(head);

    head = reverse_iterative(head);

    printf("Again after reversing: ");
    traverse(head);

}