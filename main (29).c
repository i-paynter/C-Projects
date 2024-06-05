//Coppy array elements of one array into another array
//Practice Array and pointers
//June 5, 2024

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //variables
  int num, *array1, *array2;

  //ask for how many numbers
  printf("How many numbers do you want to copy? ");
  scanf("%d",&num);

  //malloc memory
  array1=malloc(num*sizeof(int));
  array2=malloc(num*sizeof(int));

  //ask for the numbers
  printf("Enter the numbers: ");
  for(int i=0;i<num;i++){
    scanf("%d", &array1[i]);

    //copy numbers over
    array2[i]= array1[i];
  }

  //print numbers
  printf("\nHere are the arrays:\n");
  for(int j=0;j<num;j++){
    printf("%d ", array1[j]);
  }
  printf("\n");
  for(int k=0;k<num;k++){
    printf("%d ", array2[k]);
  }

  
  
  
  return 0;
}