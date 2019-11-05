#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.cpp"
#include "tic_tac_toe_3.cpp"
#include "tic_tac_toe_4.cpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test win by first column 3", "[X wins first column] 3")
{ 
	TicTacToe *board;
	board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
}



TEST_CASE("Test draw by full board 3")
{
	TicTacToe *board;
	board = new TicTacToe3();
	board->start_game("X");
	board->mark_board(3); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(4); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(6); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(8); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(7); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(9); //X   
	REQUIRE(board->game_over() == true);
	// board is full, no one wins
	
	REQUIRE(board->get_winner() == "C");
}


TEST_CASE("Test for false game over 3")
{
	TicTacToe *board;
	board = new TicTacToe3();
	board->start_game("X");
	board->mark_board(1); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(8); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(4); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(7); //X
	REQUIRE(board->game_over() == false);
	// No one should have won yet
}


TEST_CASE("Verify the game starts with player X starting 3")
{
	TicTacToe *board;
	board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->get_player() == "X");
}

TEST_CASE("Verify the game starts with player O starting 3")
{
	TicTacToe *board;
	board = new TicTacToe3();
	board->start_game("O");
	REQUIRE(board->get_player() == "O");
}


TEST_CASE("Test for player X winning by [2nd] column 3")
{
	TicTacToe *board;
	board = new TicTacToe3();
	board->start_game("X");
	board->mark_board(2); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(9); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(8); //X
	REQUIRE(board->game_over() == true);
	// X should have won!

	REQUIRE(board->get_winner() == "X");
}

TEST_CASE("Test for player O winning by [3rd] column 3")
{
	TicTacToe *board;
	board = new TicTacToe3();
	board->start_game("O");
	board->mark_board(3); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(6); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(9); //O
	REQUIRE(board->game_over() == true);
	// O should have won!
	REQUIRE(board->get_winner() == "O");
}

TEST_CASE("Test for player X winning by [1st] row 3")
{
	TicTacToe *board;
	board = new TicTacToe3();
	board->start_game("X");
	board->mark_board(1); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(7); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(3); //X
	REQUIRE(board->game_over() == true);
	// X should have won!
}


TEST_CASE("Test for player X winning by [2nd] row 3")
{
	TicTacToe *board;
	board = new TicTacToe3();
	board->start_game("X");
	board->mark_board(4); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(3); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(6); //X
	REQUIRE(board->game_over() == true);
	// X should have won!
}

TEST_CASE("Test for player X winning by [3rd] row 3")
{
	TicTacToe *board;
	board = new TicTacToe3();
	board->start_game("X");
	board->mark_board(7); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(8); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(9); //X
	REQUIRE(board->game_over() == true);
	// X should have won!
}

TEST_CASE("Diagonal win top left 4")
{
	TicTacToe *board;
	board = new TicTacToe3();
	board->start_game("X");
	board->mark_board(1); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(4); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(6); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(9); //X
	REQUIRE(board->game_over() == true);
	// X wins!
}


TEST_CASE("Diagonal win from bottom to top left 4")
{
	TicTacToe *board;
	board = new TicTacToe3();
	board->start_game("X");
	board->mark_board(9); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(4); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(6); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //X
	REQUIRE(board->game_over() == true);
	// X wins!
}



TEST_CASE("Test win by first column 4", "[X wins first column] 4")
{

	TicTacToe *board;
	board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X 
	board->mark_board(10);//O  
	board->mark_board(13);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
}


TEST_CASE("Test draw by full board 4")
{
	TicTacToe *board;
	board = new TicTacToe4();
	board->start_game("X");
	board->mark_board(1);//X 
	board->mark_board(2);//O 
	board->mark_board(3);//X 
	board->mark_board(6);//O 
	board->mark_board(4);//X 
	board->mark_board(7);//O 
	board->mark_board(5);//X 
	board->mark_board(8);//O 
	board->mark_board(9);//X 
	board->mark_board(12);//O 
	board->mark_board(10);//X 
	board->mark_board(13);//O 
	board->mark_board(11);//X 
	board->mark_board(15);//O 
	board->mark_board(14);//X 
	board->mark_board(16);//O 
	REQUIRE(board->game_over() == true);


	REQUIRE(board->get_winner() == "C");
}


TEST_CASE("Test for false game over 4")
{
	TicTacToe *board;
	board = new TicTacToe4();
	board->start_game("X");
	board->mark_board(1); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(8); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(4); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(7); //X
	REQUIRE(board->game_over() == false);
	// No one should have won yet
}


TEST_CASE("Verify the game starts with player X starting 4")
{
	TicTacToe *board;
	board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->get_player() == "X");
}

TEST_CASE("Verify the game starts with player O starting 4")
{
	TicTacToe *board;
	board = new TicTacToe4();
	board->start_game("O");
	REQUIRE(board->get_player() == "O");
}


TEST_CASE("Test for player X winning by [2nd] column 4")
{
	TicTacToe *board;
	board = new TicTacToe4();
	board->start_game("X");
	board->mark_board(2); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(6); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(10); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(9); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(14); //X
	REQUIRE(board->game_over() == true);
	// X should have won!

	REQUIRE(board->get_winner() == "X");
}

TEST_CASE("Test for player O winning by [3rd] column 4")
{
	TicTacToe *board;
	board = new TicTacToe4();
	board->start_game("O");
	board->mark_board(3); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(7); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(16); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(11); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(4); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(15); //O
	REQUIRE(board->game_over() == true);
	// O should have won!
	REQUIRE(board->get_winner() == "O");
}


TEST_CASE("Test for player X winning by [1st] row 4")
{
	TicTacToe *board;
	board = new TicTacToe4();
	board->start_game("X");
	board->mark_board(1); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(7); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(3); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(16); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(4); //X
	REQUIRE(board->game_over() == true);
	// X should have won!
}


TEST_CASE("Test for player X winning by [2nd] row 4")
{
	TicTacToe *board;
	board = new TicTacToe4();
	board->start_game("X");
	board->mark_board(5); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(6); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(3); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(7); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(11); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(8); //X
	REQUIRE(board->game_over() == true);
	// X should have won!
}

TEST_CASE("Test for player X winning by [3rd] row 4")
{
	TicTacToe *board;
	board = new TicTacToe4();
	board->start_game("X");
	board->mark_board(9); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(10); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(11); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(3); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(12); //X
	REQUIRE(board->game_over() == true);
	// X should have won!
}

TEST_CASE("Diagonal win top left 4 ")
{
	TicTacToe *board;
	board = new TicTacToe4();
	board->start_game("X");
	board->mark_board(1); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(6); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(4); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(11); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(8); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(16); //X
	REQUIRE(board->game_over() == true);
	// X wins!
}

TEST_CASE("Diagonal win from bottom to top left 4 ")
{
	TicTacToe *board;
	board = new TicTacToe4();
	board->start_game("X");
	board->mark_board(4); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(7); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(10); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(11); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(13); //X
	REQUIRE(board->game_over() == true);
	// X wins!
}
