#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

int getRandomNumber(int range) {
    // Generate a random number in the range [0, range - 1]
    int num = rand() % range;
    return num;
}

int main() {
    // Seed the random number generator with the current time
    srand(time(0));
    
    // Generate a random number within the range [0, 99]
    int randomNumber = getRandomNumber(100);
    
    int userNum, tries = 0;
    do{
    	
    	printf("\nEnter your guess number : ");
    	scanf("%d", &userNum);
    	
    	if(randomNumber > userNum) {
    		printf("\n\t Your number is less than the real number.");
		} else if(randomNumber < userNum) {
    		printf("\n\t Your number is greater than the real number.");
		}
    	
    	tries++;
	} while(userNum != randomNumber);
	
	printf("\nCorrect Guess in %d tries.", tries);
    
    return 0;
}

