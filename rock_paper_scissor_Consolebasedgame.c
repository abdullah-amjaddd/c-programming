#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int playerchoice,computerchoice;
srand(time(0));
computerchoice=rand()%3;
printf("Welcome to the game!\n");
printf("The choices for rock is 0,paper is 1 and scissor is 2.!");
printf("\nEnter your choice:");
scanf("%d",&playerchoice);
printf("\nThe computer choice is:%d",computerchoice);
if(playerchoice==0 &&  computerchoice==0){
printf("\nIts a draw\n");
} else if(playerchoice==0 && computerchoice==1){
printf("\nComputer wins\n");
} else if(playerchoice==0 && computerchoice==2){
printf("\nThe player wins\n");
} else if(playerchoice==1 && computerchoice==0){
printf("\nThe player wins\n");
} else if(playerchoice==1 && computerchoice==1){
printf("\nIts a draw\n");
} else if(playerchoice==1 && computerchoice==2){
printf("\nComputer wins\n");
} else if(playerchoice==2 && computerchoice==0){
printf("\nComputer wins\n");
} else if(playerchoice==2 && computerchoice==1){
printf("\nThe player wins\n");
} else if(playerchoice==2 && computerchoice==2){
printf("\nIts a draw\n");
}
printf("Thankyou for playing the game.\n");
    return 0;
}