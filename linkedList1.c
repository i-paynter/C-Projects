//Practice understanding linked lists
//June 18, 2024

#include <stdio.h>
#include <stdlib.h>

//structs
struct node{
  int data;
  struct Node* next;
} *startNode;


//create node
void createNode(int n){
  struct node *NumNode, *temp;
  int numbers, i;

  //make the head of node
  startNode =(struct node* ) malloc(sizeof(struct node));

  //see if allocation was successful
  if(startNode == NULL){
    printf("Allocation was unsuccessful.");
  }
  else{
    //ask for data
    printf("Enter data for node 1: ");
    scanf("%d", &numbers);
    startNode->data = numbers;
    startNode->next = NULL;
    temp = startNode;

    //loop to intake data
    for(i=2;i<=n;i++){
      NumNode = malloc(sizeof(struct node));

      if(NumNode == NULL){
        printf("Allocation was unsuccessful.");
      }else{
        //Input data
        printf("Input data for node %d: ", i);
        scanf("%d", &numbers);

        //into the list
        NumNode->data = numbers;
        NumNode->next = NULL; //make next poionter

        temp->next = NumNode; //link current to numnode
        temp = temp->next; //move temp to next node
        
      }
    }
  }
}


//print list
void printList(){
  //make temp to travel
  struct node *temp;

  //check if Null
   if(startNode == NULL) {
          printf("List is empty.");
      } else {
          temp = startNode;

          // Traversing the linked list and printing each node's data
          while(temp != NULL) {
              printf("Data = %d\n", temp->data); // Print data of the current node
              temp = temp->next;               // Moving to the next node
          }
      }
  }



int main(void) {
  //variables
  int num;
  
  //ask for input of number of nodes & scan
  printf("Input the number of nodes: ");
  scanf("%d", &num);

  //call create node function
  createNode(num);
  
  //print list
  printList();

  
  return 0;
}
