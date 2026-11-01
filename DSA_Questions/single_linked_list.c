#include <stdio.h>
#include <stdlib.h>

typedef struct single_list_node{
    int data;
    struct single_list_node * next;    
}SLL;

SLL * create_node(int data){
    SLL *new= (SLL *)malloc(sizeof(SLL));
    new->data = data;
    new->next = NULL;
    return new;
}
SLL * insert_node(SLL *head, int data){
    SLL * new = create_node(data);
    SLL * temp = head;
    if(temp == NULL){
        return new;
    }
    else {
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new;
    }
    return head;
}

SLL * node_at_position(SLL *head, int data, int searchNO){
    SLL * new = create_node(data);
    SLL * temp = head;
    int count = 0;
    while(temp != NULL && temp->next != NULL){
        count++;
        temp = temp->next;
        if(count == searchNO){
            break;
        }
    }
    new->next = temp->next;
    temp->next = new;

    return head;
}

void find_middle(SLL *temp){
    SLL * slowptr = temp;
    SLL * fastptr = temp;

    while((fastptr->next != NULL) && (fastptr->next->next != NULL)){
        fastptr = fastptr->next->next;
        slowptr = slowptr->next;
    }
    printf("Middle Node is %d\n", slowptr->data);
}

int Display_list(SLL * temp){
    if(temp == NULL) {
        printf("List is empty\n");
        return 0;
    }
    printf("\n Node is:\n");
    while (temp != NULL){
        printf(" %d ", temp->data);
        temp = temp->next;
    }
    return 0;
}

SLL * reverse_list(SLL *temp){
    SLL * cur = temp, * prev = NULL, *next;
    while(cur != NULL) {
        next = cur->next;
        cur->next = prev;
        
        prev = cur;
        cur = next;
    }
    Display_list(prev);
    return prev;
}



int main() {
    int ch;
    SLL *head = NULL;
    printf("\n1. Enter data into node");
    printf("\n2. Enter serching data into node");
    printf("\n3. Enter data into position");
    printf("\n4. Reverse the list");
    printf("\n5. Find middle");
    printf("\n6. Display\n");

    while(1) {
            scanf("%d", &ch);
           switch(ch){
                case 1: {
                    int data;
                    printf("Give an DATA\n");
                    scanf("%d", &data);
                    head = insert_node(head, data);
                    break;
                }
                case 2: {
                    int data,search;
                    printf("Give an DATA\n");
                    scanf("%d", &data);
                    printf("Searching node enter:\n");
                    scanf("%d", &search);
                    head = node_at_position(head, data, search);
                    break;
                }
                case 3: {
                    int data,search;
                    printf("Give an DATA\n");
                    scanf("%d", &data);
                    printf("Searching node enter:\n");
                    scanf("%d", &search);
                    head = node_at_position(head, data, search);
                    break; 
                }
                case 4: {
                    head = reverse_list(head);
                    break;
                }
                case 5: {
                    find_middle(head);
                    break;
                }
                case 6: {
                    Display_list(head);
                    break;
                }
           }
    }
    return 0;
}