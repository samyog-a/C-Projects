#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
// sleep => cooldown
int main()
{
  int randomnumber, guess, attempts = 0, gp = 0, uinca = 0, ae = 0, uca = 0, wca = 0;
  char playagain, hintchoice;
  int choice;
  printf("Welcome to the Number Guessing Game!\n");
  sleep(1);
  printf("Main Menu: ");
  printf("\n1. Start game");
  printf("\n2. Quit game\n");
  printf("Enter your choice(1 or 2): ");
  scanf("%d", &choice);
  switch (choice)
  {
  case 1:
    printf("The game has started..\n");
    gp++;
    printf("> You will have 7 attempts to guess the number between 1 and 100\n> After 5 attempts, you can request a hint\n");
    do
    {
      srand(time(0));
      randomnumber = rand() % 100 + 1;
      attempts = 0;
      while (attempts < 7)
      {
        printf("\nAttempts left: %d\n", 7 - attempts);
        printf("Enter your guess: ");
        if (scanf("%d", &guess) != 1)
        {
          printf("Invalid guess. Please input a valid guess!\n");
          while (getchar() != '\n')
            ;
          continue;
        }
        if (guess < randomnumber && attempts != 6)
        {
          printf("Guess Higher!\n");
          attempts++;
        }
        else if (guess > randomnumber && attempts != 6)
        {
          printf("Guess Lower!\n");
          attempts++;
        }
        else if (guess == randomnumber)
        {
          if (guess == randomnumber && (hintchoice == 'y' || hintchoice == 'Y'))
          {
            uca++;
            printf("Congratulations! Using a hint, you guessed the correct number in %d attempts.\n", attempts + 1);
            break;
          }
          else
          {
            wca++;
            printf("Congratulations! You guessed the correct number in %d attempts.\n", attempts + 1);
            break;
          }
        }
        else
        {
          uinca++;
          if ((hintchoice == 'y' || hintchoice == 'Y') && guess != randomnumber)
          {
            printf("Looks like guessing isn't your superpower!\nThe correct number was %d\n\n", randomnumber);
            break;
          }
          else
          {
            ae++;
            printf("Sorry, you've exceeded the maximum number of attempts. The correct number was %d.\n", randomnumber);
            break;
          }
        }
        if (attempts == 5)
        {
          printf("Need a hint? (y/n): ");
          scanf("%s", &hintchoice);
          if (hintchoice == 'y' || hintchoice == 'Y')
          {
            if (randomnumber % 2 == 0)
            {
              printf("Hint: The number is even.\n");
            }
            else
            {
              printf("Hint: The number is odd.\n");
            }
          }
          else
          {
          }
          do
          {
            if (hintchoice != 'y' && hintchoice != 'Y' && hintchoice != 'n' && hintchoice != 'N')
            {
              printf("Invalid choice! Pleas enter 'y' or 'n': ");
              scanf("%s", &hintchoice);
              if (hintchoice == 'y' || hintchoice == 'Y')
              {
                if (randomnumber % 2 == 0)
                {
                  printf("Hint: The number is even.");
                }
                else
                {
                  printf("Hint: The number is odd.");
                }
              }
              else
              {
              }
            }
          } while (hintchoice != 'y' && hintchoice != 'Y' && hintchoice != 'n' && hintchoice != 'N');
        }
      }
      printf("Would you like to play again? (y/n): ");
      scanf("%s", &playagain);
      if (playagain == 'n' || playagain == 'N')
      {
        printf("Thank you for playing. Goodbye!\n");
        sleep(1.5);
        printf("Here's the final scoreboard: \n");
        printf("Games Played: %d\n", gp);
        printf("Correct Guesses (using hint): %d\n", uca);
        printf("Correct Guesses (without using hint): %d\n", wca);
        printf("Incorrect Guesses (using hint): %d\n", uinca);
        printf("Attempts exceeded: %d\n", ae);
        return 0;
      }
      else if (playagain == 'y' || playagain == 'Y')
      {
        printf("The new game has started..\n");
        gp++;
        attempts = 0;
      }
    } while (playagain == 'y' || playagain == 'Y');
    if (playagain != 'n' || playagain != 'N' || playagain != 'y' || playagain != 'Y')
    {
      printf("Invalid choice; The game has ended.");
      return 0;
    }
    break;
  case 2:
    printf("The game has ended.");
    break;
  default:
    printf("Invalid choice. Please try again.");
  }
  return 0;
}
