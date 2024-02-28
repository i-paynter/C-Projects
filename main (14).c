/* Rock Paper Scissors game
 Spring 2024 */

//libraries
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//rock paper scissors
void Game (int num) {
  //local variables
  int pick;
  puts("\t\t\t\t==================================================");
  printf("\t\t\t\t\t\t\tPick an object!\n");
  printf("\t\t\t\t\t\t\t1 - Paper\n\t\t\t\t\t\t\t2 - Scissors\n\t\t\t\t\t\t\t3 - Rock\n");
  scanf(" %d", &pick);

  //compares for win and loss
  if (num == 1 && pick == 1)
    printf("It's a tie!\n");
  else if (num == 1 && pick == 2)
    printf("You win! (It was paper)\n");
  else if (num == 1 && pick == 3)
    printf("You lose... (It was paper)\n");
  else if (num == 2 && pick == 1)
    printf("You lose... (It was scissors)\n");
  else if (num == 2 && pick == 2)
    printf("It's a tie!\n");
  else if (num == 2 && pick == 3)
    printf("You win! (It was scissors)\n");
  else if (num == 3 && pick == 1)
    printf("You lose... (It was rock)\n");
  else if (num == 3 && pick == 2)
    printf("You win! (It was rock)\n");
  else if (num == 3 && pick == 3)
    printf("It's a tie!\n");
}

//random num generator and starts the game
int go() {

  //generate number from to three
  int num = (rand() % 3) + 1;

  //calls the game fucntion
  Game(num);
  return 0;
}


//main function
int main() {
  //variables
  int num;
  char answer;
  int again;

  //changes based on the time so it is different everytime
  srand(time(NULL));

  
    puts("\t\t\t\t==================================================");
    printf("\t\t\t\t\t\t\t\t\tWelcome!\n\t\t\t\t\t\tWant to play Rock Paper Scissors?(Y/n)\n");
  
    scanf(" %c", &answer);
  do{
    //switch statement
    switch (answer) {
    case 'y': {
      go();
      break;
    }
    case 'Y': {
      go();
      break;
    }
    case 'n': {
      printf("\t\t\t\t=====================Goodbye!=====================\n");
      break;
    }
    case 'N': {
      printf("\t\t\t\t=====================Goodbye!=====================\n");
      break;
    }
    }
    printf("Do you want to play again? 1 for yes and 0 for no:");
    scanf("%d", &again);
  } while (again != 0);
  printf("\t\t\t\t=====================Goodbye!=====================\n");



  return 0;
}































































//If you came this far I made this really late to practice :)
//glhf