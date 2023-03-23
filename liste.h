#include <stdio.h>
#include <stdlib.h>

typedef int Data;

typedef struct Node{
	Data val;
	struct Node *next;
}Node;

void addAtBeginning(Node **head, Data v);
void addAtEnd(Node** head, Data v);
void display(Node *head);
void modifyTheValue(int index, Node **head, int val);
int getTheSum(Node *head);
void modifyTheList(Node **head, int n);
void addAtPos(Node **head, Data number, int pos);
