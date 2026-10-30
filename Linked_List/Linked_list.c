#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} N;

N * create_node (int data) {
    N * new = (N *) malloc(sizeof(N));
    new->data = data;
    new->next = NULL;
    
    return new;
}

void traverese_node (N * head) {
    int count = 0;
    printf("Node:");
    while(head != NULL){
        printf(" %d ", head->data);
        head = head->next;
        count++;
    }
    printf("\n");
    printf("Node Count: %d\n", count);
}

void delete_pos(N * head, int pos) {
    N *thead = head;
    N *phead;
    int count = 0;
    while(thead != NULL && thead->next != NULL) {
        count++;
        if(count == pos - 1) {
            printf("count %d\n", count);
            phead = thead->next->next;
            printf("data: %d %d\n", thead->data, thead->next->data);
            free(thead->next);
            thead->next->next = NULL;
            thead->next = phead;
            break;
        }
        thead = thead->next;
    }
}

void find_middle(N *head) {
    N * slowptr = head;
    N *fastptr = head;

    while(fastptr != NULL && fastptr->next != NULL){
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
    }
    printf("Middle: %d\n", slowptr->data);
}

int main() {
    N *head = NULL;
    N * temp ;
    int data[] = {1,2, 3, 4, 5, 6, 7};
    for(int i = 0; i < 7; i++ ){
        if(head == NULL ){
            head = create_node(data[i]);
            temp = head;
        }else{
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = create_node(data[i]);
        }
    }

    traverese_node(head);
    find_middle(head);
    delete_pos(head, 3);
    traverese_node(head);

    return 0;
}