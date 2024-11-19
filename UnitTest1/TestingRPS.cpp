#include "pch.h"
#include "CppUnitTest.h"
#include <string.h>

extern "C" char* determine_winner(char* player1, char* player2);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestingRPS
{
	TEST_CLASS(TestingRPS)
	{
	public:
		
		TEST_METHOD(ROCKANDSCISSORS) {
			Assert::AreEqual(0, strcmp("Player1", determine_winner("Rock", "Scissors")));
		}
		TEST_METHOD(SCISSORSANDROCK) {
			Assert::AreEqual(0, strcmp("Player2", determine_winner("Scissors", "Rock")));
		}
		TEST_METHOD(ROCKANDROCK) {
			Assert::AreEqual(0, strcmp("Draw", determine_winner("Rock", "Rock")));
		}
		TEST_METHOD(PAPERANDROCK) {
			Assert::AreEqual(0, strcmp("Player1", determine_winner("Paper", "Rock")));
		}
		TEST_METHOD(INVALID_INPUT) {
			Assert::AreEqual(0, strcmp("Invalid", determine_winner("Rock", "Stone")));
		}
	};
}

