#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

typedef struct node NODE;

int main(void){
    int i, val, num;
    NODE *frist, *current, *previous;
    printf("number of nodes ?");
    scanf("%d", &num);
    for(i = 0; i < num; i++){
        current = (NODE*) malloc(sizeof(NODE));
        printf("data of nod %d :" ,i+1);
        scanf("%d",&(current -> data));
        if (i == 0)
            frist = current;
        else
            previous -> next = current;
        current -> next = NULL;
        previous = current;
    }
    current = frist;
    while (current != NULL){
        
    }
}