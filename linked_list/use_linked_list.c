#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(void){
    NODE *frist, *node;
    int arr[] = {12, 38, 57};
    frist = createList(arr,3);
    printList(frist);
    freeList(frist);

    system("pause");
    return 0;
}

/*creataList*/
NODE *createList(int *arr,int len){
    int i;
    NODE *frist, *current, *previous;
    for(int i;i<len;i++){
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