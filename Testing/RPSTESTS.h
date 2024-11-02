#include <stdio.h>
#include <assert.h>
#include <string.h>

char* determine_winner(const char* player1, const char* player2);

void test_determine_winner() {
	assert(strcmp(determine_winner("Rock", "Scissors"), "Player1") == 0);
	assert(strcmp(determine_winner("Scissors", "Rock"), "Player2") == 0);
	assert(strcmp(determine_winner("Rock", "Rock"), "Draw") == 0);
	assert(strcmp(determine_winner("Paper", "Rock"), "Player1") == 0);
	assert(strcmp(determine_winner("rock", "Rock"), "Invalid") == 0);
}

int main(void) {
	test_determine_winner();
	return 0;
}
