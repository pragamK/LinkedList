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

struct Node* insert_between(struct Node* head){
    int data_before;
    printf("Enter data after which you want to enter:");
    scanf("%d",&data_before);
    struct Node* ptr = head;
    while(ptr->data!=data_before){
        ptr=ptr->next;
    }
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data to enter:");
    scanf("%d",&new_node->data);
    new_node->next = ptr->next;
    ptr->next = new_node;
    return head;
}

struct Node* insert_last(struct Node* head){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    int data;
    printf("Enter the data to enter:");
    scanf("%d",&data);
    new_node->data = data;
    new_node->next = NULL;
    struct Node* ptr = head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next = new_node;
    return head;
}

void traversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

int main(){
    struct Node* head = NULL;
    printf("Enter 1 to insert at beginning\n2 to insert in between\n3 to insert at last\n4 to traverse\n5 to exit");
    while(1){
        int choice;
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch (choice){
        case 1:
            head = insert_beginning(head);
            break;
        
        case 2:
            head = insert_between(head);
            break;

        case 3:
            head = insert_last(head);
            break;

        case 4:
            traversal(head);
            break;

        case 5:
            exit(0);

        default:
            break;
        }
    }
}