#include "liste.h"

int main()
{

    /*Node *head = NULL;
    int index = 1;
    for(int i = 0; i < 5; i++){
        addAtBeginning(&head, i);
    }
    display(head);
    modifyTheValue(index, &head, val);
    display(head);
    */
    Node *listOfDurations = NULL;
    
    Data durationProcess;
    for(int i = 0; i < 5; i++){
        int x;
        printf("Duration process of function %d is: ", i);
        scanf("%d", &x);
        durationProcess = x;
        addAtEnd(&listOfDurations, durationProcess);
        getchar();
    }
  /* display(listOfDurations);
  */
    modifyTheList(listOfDurations, 5);
   // display(listOfDurations);
    addAtPos(&listOfDurations, 10, 4);
    modifyTheList(listOfDurations, 6);
    return 0;
}

