#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int Random_number, Guessed_number, No_of_Guesses, Max_Guesses;
int playAgain;
int difficulty;
srand(time(0)); // Seed for random number
do
{
// Difficulty selection
printf("Choose difficulty level:\n");
printf("1. Easy (10 tries)\n");
printf("2. Medium (7 tries)\n");
printf("3. Hard (5 tries)\n");
printf("Enter your choice (1-3): ");
scanf("%d", &difficulty);
if (difficulty == 1)
Max_Guesses = 10;
else if (difficulty == 2)
Max_Guesses = 7;
else
Max_Guesses = 5;
// Start the game
Random_number = (rand() % 100) + 1;
No_of_Guesses = 0;
printf("\nWelcome! Guess the number between 1 and 100.\n");
while (No_of_Guesses < Max_Guesses)
{
printf("Guess #%d: ", No_of_Guesses + 1);
scanf("%d", &Guessed_number);
No_of_Guesses++;
if (Guessed_number > Random_number)
{
printf("Too high!\n");
}
else if (Guessed_number < Random_number)
{
printf("Too low!\n");
}
else
{
printf("🎉 Congrats! You guessed the number in %d tries!\n", No_of_Guesses);
break;
}
}
if (Guessed_number != Random_number)
{
printf("😢 Sorry! You've used all your tries. The number was: %d\n", Random_number);
}
// Ask if user wants to play again
printf("\nDo you want to play again? (1 = Yes, 0 = No): ");
scanf("%d", &playAgain);
printf("\n");
} while (playAgain == 1);
printf("Thank you for playing. Goodbye!\n");
return 0;
}