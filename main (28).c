//Find sum of all array elements
//Practice arrays and pointers
//June 5,24

#include <stdio.h>
#include <stdlib.h>


int main(void) {
  //initialize the array
  int num, *array, sum=0;

  printf("How many numbers do you want to add?\n");
  scanf("%d", &num);

  //malloc memory for the array
  array= malloc(num * sizeof(int));

  //get numbers
  printf("Enter the values: ");
  for(int i=0;i <num; i++){
    scanf("%d", &array[i]);
    sum += array[i];
  }

  //spacer
  for(int j=0;j<35;j++){
    printf("=");
  }
  
  //print array and sum
  printf("\n\nThe array of numbers is: ");
  for(int k=0;k<num;k++){
    printf("%d, ", array[k]);
  }
  printf("\nThe sum of the numbers is %d\n", sum);
  

  //free memory
  free(array);
  
  return 0;
}
























































//Made in 45 minutes
//Isabel Paynter