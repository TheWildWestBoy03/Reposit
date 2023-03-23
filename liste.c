#include "liste.h"
void addAtBeginning(Node **head, Data v)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->val = v;
	newNode->next = *head;
	*head = newNode;
}

void addAtEnd(Node** head, Data v)
{
	Node *aux=*head;
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->val = v;
	if (*head == NULL) addAtBeginning(&*head, v);
	else{
		while (aux->next!=NULL) aux = aux->next;
		aux->next = newNode;
		newNode->next = NULL;
	}
}

void display(Node *head)
{
	while (head!=NULL){
		printf ("%d ", head->val);
		head=head->next;
	}
	printf("\n");
}

void modifyTheValue(int index, Node **head, int val){
    Node *copy = *head;
    int currentIndex = 0;
    while(copy != NULL){
        if(currentIndex == index){
            copy -> val = val;
            return;
        }
        copy = copy -> next;
        currentIndex ++;
    }
    return ;
}

int getTheSum(Node *head){
    int sum = 0;
    while(head != NULL){
        sum = sum + head -> val;
        head = head -> next;
    }
    return sum;
}
void modifyTheList(Node *head, int n){
    int sum = getTheSum(head);
    Node *copy = head, *anotherCopy = head, *nodeToDisplay = anotherCopy;
    //printf("%d \n", sum);
    display(anotherCopy);
    for(int i=0; i<n; i++){
        Data value = copy -> val;
       // printf("%d \n", value);
        modifyTheValue(i, &anotherCopy, sum);
       // display(copy);
        sum = sum - value;
        copy = copy -> next;
    }
    display(nodeToDisplay);
}
void addAtPos(Node **head, Data number, int pos){
    Node *copy = *head;
    int currentPos = 0;
    if(copy == NULL && pos == 0){
        addAtBeginning(&copy, number);
        return ;
    }
    else return;

    while(copy -> next != NULL){
        if(currentPos == pos){
            Node *auxiliar = (Node*) malloc(sizeof(Node));
            auxiliar -> val = number;
            auxiliar -> next = copy -> next;
            copy -> next = auxiliar;
            return ;
        }
        currentPos++;
        copy = copy -> next;
    }
}
