#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
int playerchoice, computerchoice;
char playAgain;
printf("Welcome to Rock-Paper-Scissors!\n");
printf("Rock = 0, Paper = 1, Scissors = 2\n");
do {
srand(time(0));
computerchoice = rand() % 3;
printf("\nEnter your choice (0-Rock, 1-Paper, 2-Scissors): ");
scanf("%d", &playerchoice);
if (playerchoice < 0 || playerchoice > 2) {
printf("Invalid choice. Please enter 0, 1, or 2.\n");
continue;
 }
 printf("Computer chose: %d\n", computerchoice);
if (playerchoice == computerchoice) {
printf("It's a draw!\n");
} else if ((playerchoice == 0 && computerchoice == 2) ||
(playerchoice == 1 && computerchoice == 0) ||
(playerchoice == 2 && computerchoice == 1)) {
printf("You win!\n");
} else {
printf("Computer wins!\n");
}
printf("\nDo you want to play again? (y/n): ");
scanf(" %c", &playAgain);  // space before %c to clear newline from buffer
} while (playAgain == 'y' || playAgain == 'Y');
printf("\nThank you for playing the game!\n");
return 0;
}