//hard code enqueue function with array and display
//practice queue concept with array
#include <stdio.h>
#include <stdlib.h>

  int* makeArray(int* Q){
    //inital array
    int *queue = (int*)malloc(4*sizeof(int));
    Q = queue;
    if(Q==NULL){
      printf("Error: malloc failed\n");
      return Q;
    }
    else if(Q != NULL) {
      printf("\nmemory assigned!");
      return Q;
    }
  }

int* enqueue(int *Q, int front, int rear){
  //int to use asa counter in loop
  int place=0;
  //if queue is full
  if (rear==4){
    printf("Queue is full\n");
    return Q;
  }else{
  front=0;
  //if queue is empty
  while(rear != 4){
    Q[place] = place;
    place++;
    rear++;
    }
    return Q;
  }
}

void display(int *Q, int front, int rear){
  //int as a counter for the loop
  int counter=0;
  rear=4;
  while(counter != rear){
    printf("%d\n", Q[counter]);
    counter++;
  }
}

int main(void) {
  int front = -1, rear =-1;
  printf("Initalize the array queue!");
  
  int *Q = makeArray(Q);
  printf("\n");
  printf("Enqueue the array queue!");
  Q = enqueue(Q, front, rear);
  printf("\n");
  printf("Display the array queue!\n");
  display(Q, front, rear);
  free(Q);
  return 0;
}





































//made in ~30 mins
//Paynter,Isabel