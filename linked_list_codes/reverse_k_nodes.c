// reversing k nodes only means: use iterative reversing for first k nodes and then call recursively for next remaining nodes

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

struct Node* reverse_k(struct Node* head,int k){
    struct Node *left, *current, *right;
    left = NULL;
    current = head;
    right = NULL;
    int count=0;

    while(current!=NULL && count!=k){
        right = current->next;
        current->next = left;

        left = current;
        current = right;
        count++;
    }

    if(right!=NULL){ //this means that to check if linked list is over or not
        head->next = reverse_k(right,k);
    }

    return left;
}

int main(){
    struct Node *head = NULL;
    int n,k;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    // just inserting at front for simplicity
    for(int i=0;i<n;i++){
        head = insert_beginning(head);
    }

    printf("Enter the value of k: ");
    scanf("%d",&k);

    printf("Before reversing: ");
    traverse(head);

    head = reverse_k(head,k);

    printf("After reversing %d nodes: ",k);
    traverse(head);

}