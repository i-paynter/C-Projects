/* Simple Calculator for basic functions
  Spring 2024 */

//Libraries
#include <stdio.h>

//main fucntion
int main(void) {
  //initialize variables
  int x, y, choice, pick=1;

  //formalities and user input
  printf("\t[Simple Calculator]\n\n");
  
  //loop to continue while user wants to
  while(pick ==1){
  printf("What do you wish to do?\n");
  printf("\t1. Addition\n\t2. Subtraction\n\t3. Multiplication\n\t4. Division\n");
  scanf("%d", &choice);

    switch(choice){
      case 1:{
        printf("Enter two numbers to add: ");
        scanf( "%d %d", &x, &y);
        printf("The sum of %d and %d is %d\n", x, y, x+y);
        break;
      }
      case 2:{
        printf("Enter two numbers to subtract: ");
        scanf( "%d %d", &x, &y);
        printf("The difference of %d and %d is %d\n", x, y, x-y);
        break;
      }
      case 3:{
        printf("Enter two numbers to multiply: ");
        scanf( "%d %d", &x, &y);
        printf("The product of %d and %d is %d\n", x, y, x*y);
        break;
      }
      case 4:{
        printf("Enter two numbers to divide: ");
        scanf( "%d %d", &x, &y);
        printf("The quotient of %d and %d is %d\n", x, y, x/y);
        break;
      }
    }

    printf("Do you wish to go again?\n\t1. Yes\n\t2. No\n");
    scanf("%d", &pick);

    if(pick==0)
      break;

  }

  printf("Goodbye!");
  
  return 0;
}
