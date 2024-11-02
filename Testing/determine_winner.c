#include <string.h>
#include <stdio.h>

char* determine_winner(const char* player1, const char* player2) {
    // Validate inputs
    if (strcmp(player1, "Rock") != 0 && strcmp(player1, "Paper") != 0 && strcmp(player1, "Scissors") != 0) {
        return "Invalid";
    }
    if (strcmp(player2, "Rock") != 0 && strcmp(player2, "Paper") != 0 && strcmp(player2, "Scissors") != 0) {
        return "Invalid";
    }

    // Determine the winner
    if (strcmp(player1, player2) == 0) {
        return "Draw";
    }
    if ((strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0) ||
        (strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0) ||
        (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0)) {
        return "Player1";
    }
    return "Player2";
}
