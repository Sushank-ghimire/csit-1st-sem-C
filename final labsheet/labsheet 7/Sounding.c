#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
    char input;
    srand(time(NULL)); // Seed the random number generator

    printf("Enter a character or number (press 'q' to quit):\n");
    while (1) {
        input = getchar(); // Get user input
        if (input == 'q' || input == 'Q') {
            printf("Exiting program...\n");
            break;
        }

        int frequency = (rand() % 1000) + 200; // Generate random frequency between 200-1200 Hz
        int duration = 300; // Fixed duration of 300ms
        
        printf("Beeping at %d Hz\n", frequency);
        Beep(frequency, duration);
    }
    
    return 0;
}

