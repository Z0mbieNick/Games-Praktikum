
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    unsigned int seed = time(NULL);
    srand(seed);
    int computer_guess_chooser = rand() % 3;


    if (computer_guess_chooser == 0){
        char computer_guess = "rock";
    } else if (computer_guess_chooser == 1){
        char computer_guess = "paper";
    } else{
        char computer_guess = "scissors";
    }

    printf("%s", computer_guess);



}