#include <assert.h>
#include <string.h>

extern char* rps_game(const char* player1, const char* player2);
void test_player1_wins() {
	assert(strcmp(rps_game("Rock", "Scissors"), "Player1") == 0);
}
void test_player2_wins() {
	assert(strcmp(rps_game("Scissors", "Rock"), "Player2") == 0);
}
void test_draw() {
	assert(strcmp(rps_game("paper", "Paper"), "Draw") == 0);
}
void test_invalid_input() {
	assert(strcmp(rps_game("Rock", "rock"), "Invalid") == 0);
}
void run_tests() {
	test_player1_wins();
	test_player2_wins();
	test_draw();
	test_invalid_input();
}
int main(void) {
	run_tests();
	return 0;
}