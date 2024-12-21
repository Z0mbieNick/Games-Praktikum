

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <stdbool.h>

int main() {
    unsigned int seed = time(NULL) ^ getpid();
    srand(seed);

    int randomNumber = rand() % 100 + 1;
    int guess;
    bool status = true;

    while (status) {
        printf("Errate die Zahl zwischen 1 und 100: ");
        
        // Check if the input is a valid integer
        if (scanf("%d", &guess) != 1) {
            printf("Fehler, bitte geben Sie eine Zahl zwischen 1 und 100 ein!\n");
            // Clear the input buffer
            while (getchar() != '\n');
            continue;
        }

        if (guess == randomNumber) {
            printf("Super, ihr habt die Zahl erraten!\n");
            status = false;
        } else if (guess < randomNumber) {
            printf("Zu niedrig, versucht es nochmal!\n");
        } else if (guess > randomNumber) {
            printf("Zu hoch, versucht es nochmal!\n");
        } else {
            printf("Fehler, bitte geben Sie eine Zahl zwischen 1 und 100 ein!\n");
        }
    }

    return 0;
}

