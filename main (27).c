//take in elements for an array and print them in reverse order
//practices array and dynamic memory allocation
//June 4,2024

#include <stdio.h>
#include <stdlib.h>

int main()
{
  //initialize vairables
  int num;
  int *array;

  printf("How many numbers do you want to store?\n");
  scanf("%d", &num);

  //malloc array
  array = malloc(num * sizeof(int));

  //get the numbers
  printf("Enter the numbers:\n");
  for(int i=0;i<num;i++){
    scanf("%d", &array[i]);
  }
  printf("\n");

  //spacer
  for(int w=0;w<20;w++){
    printf("=");
  }
  printf("\n");
  
  //print arrays
  printf("\nThe values in the array are:\n");
  for(int j=0;j<num;j++){
    printf("%d ", array[j]);
  }

  printf("\nThe values in the array in reverse are:\n");
  for(int k=num-1;k>=0;k--){
    printf("%d ", array[k]);
  }

  return 0;
}