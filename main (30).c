//Fill array with numbers and find duplicates
//Practices arrays and dynamic memory allocation
//June 5, 2024


#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //initialize variables
  int num, *array, counter, i, j;

  //ask for how many numbers
  printf("How many numbers do you want to store? ");
  scanf("%d", &num);

  //malloc array
  array=malloc(num*sizeof(int));

  //get the numbers
  printf("Enter the numbers: ");
  for(i=0;i<num;i++){
    scanf("%d", &array[i]);
  }

  //use nested loop to find duplicates
  for(i=0;i<num;i++){
    for(j=i+1;j<num;j++){
      if(array[i]==array[j]){
        counter++;
      }
    }
  }

  printf("Total number of duplicates in the array is %d", counter);

  //free memory
  free(array);
  
  return 0;
}


























































//Around 30 minutes
//Paynter,Isabel