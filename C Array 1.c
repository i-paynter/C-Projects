//goal to make an array in C to store elements and print them
//practice arrays and pointers
//June 4,24

#include <stdio.h>
#include <stdlib.h>


int main(void) 
{
  int v;
  int *array;
  
  printf("How many numbers do you want to store?\n");
  scanf("%d",&v);

  //make array with malloc
  array=malloc(v*sizeof(int));

  //get numbers
  printf("Enter %d elements\n", v);
  for(int i=0;i<v;i++)
  {
  scanf("%d",&array[i]);
  }
  //print the array
  printf("Elements in the array are: ");
  for(int j=0; j<v;j++)
  {
    printf("%d ", array[j]);
  }

  //free the aray
  free(array);

  
  return 0;
}





























































//Made in 45 minutes 
//Paynter,Isabel
