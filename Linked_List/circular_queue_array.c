#include <stdio.h>
#include <stdlib.h>

typedef struct cQueue{
    int front;
    int rear;
    int capacity;
    int *arr;
} CQ;

int isFull(CQ *cq){
    if(cq->front == (cq->rear+1) % cq->capacity){
        return 1;
    }
    return 0;
}

int isEmpty(CQ *cq){
    if(cq->front == -1){
        return 1;
    }
    return 0;
}

void enQueue(CQ * cq, int data){
    if(!isFull(cq)){
        cq->arr[cq->rear] = data;
        cq->rear = (cq->rear+1) % cq->capacity;
        if(cq->front == -1)
            cq->front = cq->rear;
    } else {
        printf("Queue is full\n");
    }
}

void deQueue(CQ *cq){
    printf("Deleted: %d\n", cq->arr[cq->front]);
    if(!isEmpty(cq)){
        if(cq->front == cq->rear)
            cq->rear = cq->front = -1;
        else
            cq->front = (cq->front + 1) % cq->capacity;
    } else {
        printf("Queue is empty\n");
    }
}
void print(CQ *cq){
    int i = cq->front;
    while(1) {
        printf("%d ", cq->arr[i]);
        if(i == cq->rear)
            break;
        i = (i+1) %cq->capacity;
    }
}

int main(){
    
    CQ C;
    C.capacity = 5;
    C.front = C.rear = -1;
    C.arr = (int *)malloc(sizeof(C.capacity * sizeof(int)));

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
                enQueue(&C,data);
                break;
            }
            case 2:
                deQueue(&C);
                break;
            case 3:
                print(&C);
            case 4:
                //

            default:
                break;
        }
    }
    return 0;
}