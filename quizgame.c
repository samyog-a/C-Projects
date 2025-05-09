#include <stdio.h>
#include <unistd.h>

int main()
{
  int i;
  char ans1, ans2, ans3, ans4, ans5, ans6, ans7, ans8, ans9, ans10, bonusans, bonuschoice;
  int point1, point2, point3, point4, point5, point6, point7, point8, point9, point10, totalp;
  printf("Welcome to the Quiz Game!\n\n");
  printf(">> Press 7 to start the game\n");
  printf(">> Press 0 to end the game\n");
  scanf("%d", &i);
  if (i == 7)
  {
    {
      printf("The game has started...\n\n");
      sleep(2);
      printf(" Question 1: Who is the father of Computers?\n");
      printf("a. James Gosling\n");
      printf("b. Charles Babbage\n");
      printf("c. Dennis Ritchie\n");
      printf("d. Bjarn Stroustrup\n");
      printf("Enter your answer (a/b/c/d): ");
      scanf("%s", &ans1);
      if (ans1 == 'b')
      {
        point1 = 10;
        printf("The answer is correct.\nYou obtain %d points.\n\n", point1);
      }
      else
      {
        point1 = 0;
        printf("The answer is incorrect. The correct answer is b.\nYou obtain %d points.\n\n", point1);
      }
    }
    {
      sleep(2);
      printf(" Question 2: What was the first Internet search engine?\n");
      printf("a. Yahoo\n");
      printf("b. Archie\n");
      printf("c. WebCrawler\n");
      printf("d. Google\n");
      printf("Enter your answer: ");
      scanf("%s", &ans2);
      if (ans2 == 'b')
      {
        point2 = 10;
        printf("The answer is correct.\nYou obtain %d points.\n\n", point2);
      }
      else
      {
        point2 = 0;
        printf("The answer is incorrect. The correct answer is b.\nYou obtain %d points.\n\n", point2);
      }
    }
    {
      sleep(2);
      printf(" Question 3: What is the correct abbreviation of COMPUTER?\n");
      printf("a. Commonly Occupied Machines Used in Technical and Educational Research\n");
      printf("b. Commonly Operated Machines Used in Technical and Environmental Research\n");
      printf("c. Commonly Oriented Machines Used in Technical and Educational Research\n");
      printf("d. Commonly Operated Machines Used in Technical and Educational Research\n");
      printf("Enter your answer: ");
      scanf("%s", &ans3);
      if (ans3 == 'd')
      {
        point3 = 10;
        printf("The answer is correct.\nYou obtain %d points.\n\n", point3);
      }
      else
      {
        point3 = 0;
        printf("The answer is incorrect. The correct answer is d.\nYou obtain %d points.\n\n", point3);
      }
    }
    {
      sleep(2);
      printf(" Question 4: Which of the following computer language is written in binary code only?\n");
      printf("a. C\n");
      printf("b. C#\n");
      printf("c. Assembly Language\n");
      printf("d. Machine Language\n");
      printf("Enter your answer: ");
      scanf("%s", &ans4);
      if (ans4 == 'd')
      {
        point4 = 10;
        printf("The answer is correct.\nYou obtain %d points.\n\n", point4);
      }
      else
      {
        point4 = 0;
        printf("The answer is incorrect. The correct answer is d.\nYou obtain %d points.\n\n", point4);
      }
    }
    {
      sleep(2);
      printf(" Question 5: Which of the following is the smallest unit of data in a computer?\n");
      printf("a. KB\n");
      printf("b. Nibble\n");
      printf("c. Bit\n");
      printf("d. Byte\n");
      printf("Enter your answer: ");
      scanf("%s", &ans5);
      if (ans5 == 'c')
      {
        point5 = 10;
        printf("The answer is correct.\nYou obtain %d points.\n\n", point5);
      }
      else
      {
        point5 = 0;
        printf("The answer is incorrect. The correct answer is c.\nYou obtain %d points.\n\n", point5);
      }
    }
    {
      sleep(2);
      printf(" Question 6: Which of the following unit is responsible for converting the data received from the user into a computer understandable format?\n");
      printf("a. Output Unit\n");
      printf("b. Input Unit\n");
      printf("c. Memory Unit\n");
      printf("d. Arithmetic and Logic Unit\n");
      printf("Enter your answer: ");
      scanf("%s", &ans6);
      if (ans6 == 'b')
      {
        point6 = 10;
        printf("The answer is correct.\nYou obtain %d points.\n\n", point6);
      }
      else
      {
        point6 = 0;
        printf("The answer is incorrect. The correct answer is b.\nYou obtain %d points.\n\n", point6);
      }
    }
    {
      sleep(2);
      printf(" Question 7: Which of the following invention gave birth to the much cheaper microcomputers?\n");
      printf("a. PDAs\n");
      printf("b. Microcomputers\n");
      printf("c. Microprocessors\n");
      printf("d. Mainframes\n");
      printf("Enter your answer: ");
      scanf("%s", &ans7);
      if (ans7 == 'c')
      {
        point7 = 10;
        printf("The answer is correct.\nYou obtain %d points.\n\n", point7);
      }
      else
      {
        point7 = 0;
        printf("The answer is incorrect. The correct answer is c.\nYou obtain %d points.\n\n", point7);
      }
    }
    {
      sleep(2);
      printf(" Question 8: Which of the following is not an example of Octal Number System?\n");
      printf("a. 123\n");
      printf("b. 478\n");
      printf("c. 372\n");
      printf("d. 136\n");
      printf("Enter your answer: ");
      scanf("%s", &ans8);
      if (ans8 == 'b')
      {
        point8 = 10;
        printf("The answer is correct.\nYou obtain %d points.\n\n", point8);
      }
      else
      {
        point8 = 0;
        printf("The asnwer is incorrect. The correct answer is b.\nYou obtain %d points.\n\n", point8);
      }
    }
    {
      sleep(2);
      printf(" Question 9: Which of the following number system is mostly used by humans for their mathematical/calculation work?\n");
      printf("a. Binary number system\n");
      printf("b. Heaxdecimal number system\n");
      printf("c. Decimal number system\n");
      printf("d. Octal number system\n");
      printf("Enter your answer: ");
      scanf("%s", &ans9);
      if (ans9 == 'c')
      {
        point9 = 10;
        printf("The answer is correct.\nYou obtain %d points.\n\n", point9);
      }
      else
      {
        point9 = 0;
        printf("The answer is incorrect. The correct answer is c.\nYou obtain %d points.\n\n", point9);
      }
    }
    {
      sleep(2);
      printf(" Question 10: Which of the following statements is true about arrays in C programming?\n");
      printf("a. Arrays can store elements of different data types.\n");
      printf("b. Arrays have a fixed size that cannot be changed during runtime.\n");
      printf("c. Arrays do not require indexing to access individual elements.\n");
      printf("d. Arrays are limited to storing only a single value under a variable name.\n");
      printf("Enter your answer: ");
      scanf("%s", &ans10);
      if (ans10 == 'b')
      {
        point10 = 10;
        printf("The answer is correct.\nYou obtain %d points.\n\n", point10);
      }
      else
      {
        point10 = 0;
        printf("The answer is incorrect. The correct answer is b.\nYou obtain %d points.\n\n", point10);
      }
    }
    {
      totalp = point1 + point2 + point3 + point4 + point5 + point6 + point7 + point8 + point9 + point10;
      sleep(1);
      printf("The quiz is over. Thank you for playing.\n");
      if (totalp <= 40)
      {
        sleep(1);
        printf("You obtained %d points in total.\nKeep Learning and Improving!\n\n", totalp);
      }
      else
      {
        sleep(1);
        printf("You obtained %d points in total.\nYou're a true master of this quiz!\n\n", totalp);
      }
    }
    {
      sleep(2);
      printf(" Would you like to answer the bonus question? (y/n): ");
      scanf("%s", &bonuschoice);
      if (bonuschoice == 'y')
      {
        printf("Great! Here's the bonus question...\n");
        sleep(2);
        printf("A bat and a ball cost $1.10 in total. The bat costs $1.00 more than the ball. How much does the ball cost?\n");
        printf("a. $0.50\n");
        printf("b. $0.10\n");
        printf("c. $1.00\n");
        printf("d. $0.05\n");
        printf("Enter your answer: ");
        scanf("%s", &bonusans);
        if (bonusans == 'd')
        {
          printf("Yes, That's it! Awesome Work!");
        }
        else
        {
          printf("Unfortunately, that's not quite the right answer.");
        }
      }
      else if (bonuschoice == 'n')
      {
        printf("Alright! Thank you for playing.");
      }
      else
      {
        printf("Invalid choice!");
      }
    }
    return 0;
  }
  else if (i == 0)
  {
    printf("The game has ended.");
  }
  else
  {
    printf("Wrong Entry!");
  }
  return 0;
}