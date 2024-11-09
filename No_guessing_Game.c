#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
// Random Guessing game
int main(){

srand (time(0)); // use to initalize random number generator with a seed value
int systemNo = (rand() %10) +1;
int userNo,count =0;
    printf("Welcome to No. Guessing Game\n");
    printf("I have a number in mind between 1-10 can you guess it\n");

while (1) {
        printf("Enter your guess: ");
        scanf("%d", &userNo);
        count++;  // Increment the number of attempts

        // Check the user's guess
        if (userNo == systemNo) {
            printf("\n--------------------------------------------\n");
            printf("Congratulations! Your guess is correct: %d\n", systemNo);
            printf("You guessed the number in %d attempts.\n", count);
            printf("--------------------------------------------\n");
            break;  // Exit the loop when the guess is correct
        } else if (userNo > systemNo) {
            printf("Your guess is higher than mine. Try again!\n");
        } else {
            printf("Your guess is lower than mine. Try again!\n");
        }
    }

    return 0;
}