#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
// sleep => cooldown
int main()
{
  char computerchoice, userchoice, playagain;
  int userwins = 0, computerwins = 0, ties = 0, gamesP = 0;
  printf("Welcome to Rock, Paper, Scissors!\n");
  do
  {
    srand(time(0));
    computerchoice = rand() % 100;
    gamesP++;
    printf("Enter your choice (r for Rock, p for Paper, s for Scissors): ");
    scanf(" %c", &userchoice);
    if (userchoice != 's' && userchoice != 'p' && userchoice != 'r')
    {
      printf("Invalid choice; The game has ended.\n");
      return 0;
    }
    printf("You chose: ");
    if (userchoice == 'r')
    {
      printf("Rock\n");
    }
    else if (userchoice == 'p')
    {
      printf("Paper\n");
    }
    else
    {
      printf("Scissors\n");
    }
    sleep(2);
    printf("Computer chose: ");
    if (computerchoice < 33)
    {
      printf("Rock\n");
    }
    else if (computerchoice >= 33 && computerchoice < 66)
    {
      printf("Paper\n");
    }
    else
    {
      printf("Scissors\n");
    }
    if ((userchoice == 'p' && computerchoice >= 66) ||
        (userchoice == 's' && computerchoice < 33) ||
        (userchoice == 'r' && (computerchoice >= 33 && computerchoice < 66)))
    {
      sleep(1);
      printf("Computer wins!\n");
      computerwins++;
    }
    else if ((userchoice == 'p' && computerchoice < 33) ||
             (userchoice == 's' && (computerchoice >= 33 && computerchoice < 66)) ||
             (userchoice == 'r' && computerchoice >= 66))
    {
      sleep(1);
      printf("You win!\n");
      userwins++;
    }
    else
    {
      sleep(1);
      printf("It's a tie!\n");
      ties++;
    }
    // sleep(1.5);
    printf("\nWould you like to play again? (y/n): ");
    scanf("%s", &playagain);
    if (playagain == 'n' || playagain == 'N')
    {
      printf("Thank you for playing.\n");
      // sleep(1);
      printf("Here's the final scoreboard: \n");
      printf("Games Played: %d\n", gamesP);
      printf("User Wins: %d\n", userwins);
      printf("Computer Wins: %d\n", computerwins);
      printf("Ties: %d\n", ties);
      return 0;
    }
    else if (playagain != 'y' && playagain != 'Y' && playagain != 'n' && playagain != 'N')
    {
      while (playagain != 'y' && playagain != 'Y' && playagain != 'n' && playagain != 'N')
      {
        printf("Invalid choice! Please enter 'y' or 'n': ");
        scanf("%s", &playagain);
        if (playagain == 'n' || playagain == 'N')
        {
          printf("Thank you for playing.\n");
          printf("Here's the final scoreboard: \n");
          printf("Games Played: %d\n", gamesP);
          printf("User Wins: %d\n", userwins);
          printf("Computer Wins: %d\n", computerwins);
          printf("Ties: %d\n", ties);
          return 0;
        }
      }
    }
    else
    {
      gamesP++;
      printf("The new game has started\n");
    }
  } while (playagain == 'y' || playagain == 'Y');
  return 0;
}