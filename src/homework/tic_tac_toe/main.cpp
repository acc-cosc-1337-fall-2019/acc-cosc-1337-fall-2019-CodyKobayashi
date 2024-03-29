#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<iostream>

using std::cout;
using std::cin;

int main() 
{
	// This comment here is only to re-push assignment with a more appropiate name

	unique_ptr<TicTacToeManager> manager = 
		std::make_unique<TicTacToeManager>();
	string player = "X";
	string contin = "Y";
	int game_type;

	do
	{
		unique_ptr<TicTacToe> board;

		cout << "Play window by 3 or 4: ";
		cin >> game_type;

		if (game_type == 3)
		{
			board = std::make_unique<TicTacToe3>();
		}
		else
		{
			board = std::make_unique<TicTacToe4>();
		}

		board->display_beginning_board(*board); // Display purposes
		cout << "Will X or O start?: ";
		cin >> player;
		board->start_game(player);
		
		while (!board->game_over())
		{
			cin >> *board;
			cout <<*board;
		}


		manager->save_game(board);

		//cout << *board;
		cout << "\nGame over! Would you like to continue? Y/N: ";
		cin >> contin;
	
	} while (contin == "Y" || contin == "y");

	cout << "History: \n";
	cout << manager;

	return 0;
}