//linked_list
#include <stdio.h>
#include <stdlib.h> 
struct node
{
    int data;
    struct node *next;    
};

typedef struct node NODE;

//NODE *createList(int *, int);
//void printList(NODE *);
//void freeList(NODE *);
void insertList(NODE *);
void *searchList(NODE *);
void *deleteList(NODE *);

/*creataList*/
NODE *createList(int *arr,int len){
    int i;
    NODE *frist, *current, *previous;
    for( i; i<len; i++){
        current = (NODE*) malloc(sizeof(NODE));
        current -> data = arr[i];
        if(i==0)
            frist = current;
        else
            previous -> next = current;
        current -> next = NULL;
        previous = current;
    }
    return frist;
}

/*printList*/
void printList(NODE *frist){
    NODE* node = frist;
    if(frist = NULL)
        printf("List is empty!");
    else{
        while(node!=NULL){
            printf("%3d", node->data);
            node = node ->next;
        }
        printf("\n");
    }
}

/*freeList*/
void freeList(NODE *frist){
    NODE *current, *tmp;
    current = frist;
    while (current != NULL)
    {
        tmp = current;
        current = current -> next;
        free(tmp);
    }   
}
