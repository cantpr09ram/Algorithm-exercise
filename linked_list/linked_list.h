struct node
{
    int data;
    struct node *next;    
};

typedef struct node NODE;

NODE *createList(int *, int);
void printList(NODE *);
void freeList(NODE *);
void insertList(NODE *);
void *searchList(NODE *);
void *deleteList(NODE *);