#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int computer_choice() {
    return rand() % 3 + 1;
}

void print_choice(int choice) {
    if (choice == 1) {
        printf("Scissors");
    } else if (choice == 2) {
        printf("Paper");
    } else if (choice == 3) {
        printf("Rock");
    }
}

int main() {
    int player_choice;
    int c_choice;

    srand(time(NULL));

    printf("=== Rock Paper Scissors ===\n\n");
    printf("[1] - Scissors\n");
    printf("[2] - Paper\n");
    printf("[3] - Rock\n");
    printf("Your choice: ");

    scanf("%d", &player_choice);

    if (player_choice < 1 || player_choice > 3) {
        printf("Invalid choice!\n");
        return 1;
    }

    c_choice = computer_choice();

    printf("\nYou chose: ");
    print_choice(player_choice);

    printf("\nComputer chose: ");
    print_choice(c_choice);

    printf("\n\n");

    if (player_choice == c_choice) {
        printf("Draw!\n");
    }
    else if ((player_choice == 1 && c_choice == 2) ||
             (player_choice == 2 && c_choice == 3) ||
             (player_choice == 3 && c_choice == 1)) {
        printf("You win!\n");
    }
    else {
        printf("Computer wins!\n");
    }

    return 0;
}
