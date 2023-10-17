#ifndef LINKED_LIST_H
#define LINKED_LIST_H


typedef struct _node SNode;
typedef struct _linked_list LinkedList;

SNode *SNode_create(int val);
LinkedList *LinkedList_create();
void LinkedList_add_firts(LinkedList *L, int val);




#endif