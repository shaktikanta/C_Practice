#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}N;

N * front = NULL;
N * rear  = NULL;

void enQueue(int data){                 //consider the rear movement as insert happens at end

    N * newNode = (N *)malloc(sizeof (N));
    newNode->data = data;
    newNode->next = NULL;

    if (front == NULL && rear == NULL) // empty case check
    {
        front = rear = newNode;
        newNode->next = front;
    }
    rear->next = newNode;
    rear = newNode;
    newNode->next = front;
}

void deQueue() {                        //consider the movement of front as delete happens in the front side
    if(front == NULL && rear == NULL){
        printf("Queue is empty\n");
    }
    else if (front == rear) {           //Only one node is present
        rear = NULL;
        free(front);
        front = NULL;
    }
    else {
        N *temp = front;
        front = front->next;
        rear->next = front;
        free(temp);
        temp = NULL;
    }
}

void findLength() {
    if(front == NULL && rear == NULL){
        printf("Queue is empty\n");
    }
    else{
        int count = 0;
        N *temp = front;
        do {
            printf("Node: %d ", temp->data);
            count++;

            temp = temp->next;

        } while (temp != front);
    }
}
int main(){
    
    while(1){
        printf("What would you like to do with Queue\n");
        printf("1. Insert  \n2. Delete \n3. Length of Queue\n");
        int ch;
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:{
                int data;
                printf("Enter data\n");
                scanf("%d", &data);
                enQueue(data);
                break;
            }
            case 2:
                deQueue();
                break;
            case 3:
                findLength();
            default:
                break;
        }
    }
    
}