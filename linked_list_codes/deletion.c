#include <stdlib.h>
#include <stdio.h>

struct Node{
    int data;
    struct Node *next;
};

void traverse(struct Node *ptr){
    if(ptr!=NULL){
        while(ptr!=NULL){
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
        printf("\n");
    }else{
        printf("\nLinked list is empty!!");
    }
}

struct Node* insert(struct Node* head){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    int data;
    printf("Enter the data to enter:");
    scanf("%d",&data);
    new_node->data = data;
    new_node->next = head;
    head = new_node;
    return head;
}

struct Node* delete_first(struct Node* head){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr = head;
    head = head->next;
    free(ptr);
    printf("First node deleted successfully!!");
    return head;
}

struct Node* delete_last(struct Node* head){
    struct Node* ptr1 = head;
    struct Node* ptr2 = head->next;
    while(ptr2->next!=NULL){
        ptr2=ptr2->next;
        ptr1=ptr1->next;
    }
    ptr1->next = NULL;
    free(ptr2);
    printf("Last node deleted successfully!!");
    return head;
}

struct Node* delete_between(struct Node* head){
    int index;
    printf("Enter the index to delete:");
    scanf("%d",&index);
    int i=0;
    struct Node* ptr1 = head;
    struct Node* ptr2 = head;
    while(i!=index-1){
        ptr1=ptr1->next;
        i++;
    }
    ptr2=ptr1->next;
    ptr1->next = ptr2->next;
    free(ptr2);
    return head;
}

int main(){
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    head = NULL;
    printf("Enter 1 to insert at beginning\n2 to insert in between\n3 to insert at last\n4 to traverse\n5 to exit");
    while(1){
        int ch;
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1: head = insert(head);
                break;

            case 2: head = delete_first(head);
                break;

            case 3: head = delete_between(head);
                break;

            case 4: head = delete_last(head);
                break;

            case 5: traverse(head);
                break;

            case 6: exit(0);

            default:
                break;
        }
    }
}