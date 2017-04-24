#include <stdio.h>

/* Linked List Node. */
typedef struct LinkedListNode {
  int value;
  LinkedListNode *next;
}

LinkedListNode * linkedListNodeNew(int value)
{
  LinkedListNode *newNode = malloc(sizeof(LinkedListNode));

  assert(newNode != NULL);
  newNode->value = value;
  newNode->next = NULL;

  return newNode;
}
