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