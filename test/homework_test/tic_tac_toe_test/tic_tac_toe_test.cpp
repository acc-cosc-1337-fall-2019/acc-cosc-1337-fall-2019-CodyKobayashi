#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.cpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test win by first column", "[X wins first column]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   First column win are user positions 1,4, and 7
vector view: 0, 3, and 6
	   */
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
	board.mark_board(1);//X         
	REQUIRE(board.game_over() == false);
	board.mark_board(2);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(4);//X          
	REQUIRE(board.game_over() == false);
	board.mark_board(5);//O          
	REQUIRE(board.game_over() == false);
	board.mark_board(7);//X 
	//X wins 
	REQUIRE(board.game_over() == true);
}


TEST_CASE("Test draw by full board")
{
	TicTacToe board;
	board.start_game("X");
	board.mark_board(3); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(1); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(4); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(2); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(5); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(6); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(8); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(7); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(9); //X   
	REQUIRE(board.game_over() == true);
	// board is full, no one wins
}


TEST_CASE("Test for false game over")
{
	TicTacToe board;
	board.start_game("X");
	board.mark_board(1); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(5); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(8); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(4); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(7); //X
	REQUIRE(board.game_over() == false);
	// No one should have won yet
}


TEST_CASE("Verify the game starts with player X starting")
{
	TicTacToe board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
}

TEST_CASE("Verify the game starts with player O starting")
{
	TicTacToe board;
	board.start_game("O");
	REQUIRE(board.get_player() == "O");
}


TEST_CASE("Test for player X winning by [2nd] column")
{
	TicTacToe board;
	board.start_game("X");
	board.mark_board(2); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(1); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(5); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(9); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(8); //X
	REQUIRE(board.game_over() == true);
	// X should have won!
}

TEST_CASE("Test for player X winning by [3rd] column")
{
	TicTacToe board;
	board.start_game("X");
	board.mark_board(3); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(5); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(6); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(1); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(9); //X
	REQUIRE(board.game_over() == true);
	// X should have won!
}

TEST_CASE("Test for player X winning by [1st] row")
{
	TicTacToe board;
	board.start_game("X");
	board.mark_board(1); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(5); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(2); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(7); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(3); //X
	REQUIRE(board.game_over() == true);
	// X should have won!
}


TEST_CASE("Test for player X winning by [2nd] row")
{
	TicTacToe board;
	board.start_game("X");
	board.mark_board(4); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(1); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(5); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(3); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(6); //X
	REQUIRE(board.game_over() == true);
	// X should have won!
}

TEST_CASE("Test for player X winning by [3rd] row")
{
	TicTacToe board;
	board.start_game("X");
	board.mark_board(7); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(1); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(8); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(5); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(9); //X
	REQUIRE(board.game_over() == true);
	// X should have won!
}

TEST_CASE("Diagonal win top left")
{
	TicTacToe board;
	board.start_game("X");
	board.mark_board(1); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(4); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(5); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(6); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(9); //X
	REQUIRE(board.game_over() == true);
	// X wins!
}

TEST_CASE("Diagonal win from bottom to top left")
{
	TicTacToe board;
	board.start_game("X");
	board.mark_board(9); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(4); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(5); //X
	REQUIRE(board.game_over() == false);
	board.mark_board(6); //O
	REQUIRE(board.game_over() == false);
	board.mark_board(1); //X
	REQUIRE(board.game_over() == true);
	// X wins!
}