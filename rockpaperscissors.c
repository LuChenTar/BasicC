//name: Lu Chen
//date: 18 Mar 2015
//Description: Rock, paper, scissors, is a simple game between two opponents
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int compscore = 0, userscore = 0;
int main(void) {
    char input, computer;
    srand(time(NULL));
    
    while(1){  
        printf("Rock, Paper, Scissors.  Enter one of: 'r', 'p', 's'.\nYou selected: ");
        int c = rand() % 3 + 1;  
        scanf("%s", &input);

        if(input == 'r') {
            printf("Rock      Computer selected: ");
            if(c == 1) {
                userscore++;
                printf("Scissors\nYou win. :(\nYour score: %d          Computer : %d\n", userscore, compscore);
            } else if (c == 2) {
                compscore++;
                printf("Paper\nComputer Wins. :)\nYour score: %d          Computer : %d\n", userscore, compscore);
            } else if (c == 3) {
                printf("Rock\nDraw.\nYour score: %d          Computer : %d\n", userscore, compscore);
            }
        }else if (input == 'p') {
            printf("Paper      Computer selected: ");
            if(c == 1) {
                compscore++;
                printf("Scissors\nComputer Wins. :)\nYour score: %d          Computer : %d\n", userscore, compscore);
            } else if (c == 2) {
                printf("Paper\nDraw.\nYour score: %d          Computer : %d\n", userscore, compscore);
            } else if (c == 3) {
                userscore++;
                printf("Rock\nYou win. :(\nYour score: %d          Computer : %d\n", userscore, compscore);
            }
        }else if (input == 's') {
            printf("Scissors      Computer selected: ");
            if(c == 1) {
                printf("Scissors\nDraw.\nYour score: %d          Computer : %d\n", userscore, compscore);
            } else if (c == 2) {
                userscore++;
                printf("Paper\nYou win. :(\nYour score: %d          Computer : %d\n", userscore, compscore);
            } else if (c == 3) {
                compscore++;
                printf("Rock\nComputer Wins. :)\nYour score: %d          Computer : %d\n", userscore, compscore);
            }
        }else {
            printf("You move is invalid!\n");
            return 1;
        }
    }
    return 0;
}