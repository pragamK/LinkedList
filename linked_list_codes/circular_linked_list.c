#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traverse(struct Node* head){
    struct Node *ptr;

    if (head==NULL){
        printf("List is empty\n");
    }

    else{
        ptr = head -> next;
        do{
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
        while(ptr!=head->next);
        printf("\n");
    }
}

struct Node* insert_between(struct Node* head){
    int i=0,index,data;
    printf("Enter element to insert:");
    scanf("%d",&data);
    printf("Enter index at which you want to enter:");
    scanf("%d",&index);
    struct Node* ptr = head;
    while(i!=index){
        ptr=ptr->next;
        i++;
    }
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = ptr->next;
    ptr->next = new_node;
    return head;
}

struct Node* insert_last(struct Node* head){
    int data;
    printf("Enter element to insert:");
    scanf("%d",&data);
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = head->next;
    head->next = new_node;
    head = new_node;
    return head;
}

struct Node* insert_first(struct Node* head){
    int el;
    printf("Enter element to insert:");
    scanf("%d",&el);
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = el;
    new_node->next = head->next;
    head->next = new_node;
    return head;
}

struct Node* insert_empty(struct Node* head,int el){
    if(head!=NULL){
        return head;
    }
    else{
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
        new_node->data = el;
        head = new_node;
        new_node->next = head;
        return head;
    }
}

struct Node* delete_last(struct Node* head,int el){
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    return head;
}

int main(){
    struct Node *head = NULL;
    printf("Linked list is empty!!\nEnter the data to insert in the empty linked list: ");
    int element;
    scanf("%d",&element);
    head = insert_empty(head,element);

    int ch;
    printf("\n----Enter 1 to insert at first, 2 to insert between, 3 to insert at last, 4 to traverse and 5 to exit----\n");
    while(1){
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1: head = insert_first(head);
                    break;

            case 2: head = insert_between(head);
                    break;

            case 3: head = insert_last(head);
                    break;

            case 4: traverse(head);
                    break;

            case 5: exit(0);

            default:
                printf("Invalid choice\n;");
        }
    }
}