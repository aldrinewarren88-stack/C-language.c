/*
 *NAME:ALDRINE WARREN
 *REG NO:PA106/G/28818/25
 *DESCRIPTION:PROGRAM TO DISPLAY A GAME OF GUESSING A  GAMING NUMBER WITH SEVERAL TRIALS
 *
 *  The guessing game is programmed using initialised integers(guess,tries,min,max,answer),a  random function
 *  After welcoming the gamer , you use do while loop  with the if and elseif and else functions included
 *
 */
//ESSENTIAL PRE-PROCESSOR DIRECTIVE
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//MAIN FUNCTION
int main() {
    //INITIALIZING THE INTEGERS
    int guess=0;
    int tries=0;
    int min=1;
    int max=100;
    int answer=(rand()%(max-min+1)); //INITIALIZING THE RANDOM FUNCTION

    printf("~~~WELCOME TO NUMBER GUESSING GAME~~~ ");
    //DOING THE CODE ONCE WHILE THE GUESS DOES NOT EQUAL TO THE ANSWER
    do {
    printf("Guess a number between %d-%d\n: ",min,max);
        scanf("%d",&guess);
        tries ++;
        //CONDITIONAL STATEMENTS
        if(guess<answer) {
            printf("Too low!\n ");
        }
        else if(guess>answer) {
            printf("Too high!\n ");
        }
        else {
            printf("SPECTACULAR CORRECT GUESS\n", tries);
        }
    }
    while (guess!=answer);
    printf("The answer is %d\n",answer);
    printf("It took you %d tries to get the exact answer", tries);
    return 0;
}