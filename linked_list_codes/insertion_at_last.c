#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node* insert_last(struct Node* head){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)), *ptr=head;
    int data;
    printf("Enter the data to enter:");
    scanf("%d",&data);
    new_node->data = data;
    new_node->next = NULL;
    if(head==NULL){
        head = new_node;
        return head;
    }
    else{
        while (ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next = new_node;
        return head;
    }
}

void traverse(struct Node* head){
    struct Node* ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

int main(){
    struct Node *head1 = NULL,*head2 = NULL;
    int n,m;
    printf("Enter the number of elements in first LL: ");
    scanf("%d",&n);

    // just inserting at last for simplicity
    for(int i=0;i<n;i++){
        head1 = insert_last(head1);
    }

    printf("Enter the number of elements in second LL: ");
    scanf("%d",&m);

    // just inserting at last for simplicity
    for(int i=0;i<m;i++){
        head2 = insert_last(head2);
    }

    traverse(head1);
    traverse(head2);
}