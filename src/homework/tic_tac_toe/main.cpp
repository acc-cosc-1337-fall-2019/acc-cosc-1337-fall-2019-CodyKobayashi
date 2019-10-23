#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<iostream>

using std::cout;
using std::cin;

int main() 
{
	// This comment here is only to re-push assignment with a more appropiate name

	TicTacToeManager manager;
	string player = "X";
	string contin = "Y";

	do
	{
		TicTacToe board;

		cout << "Will X or O start?: ";
		board.start_game(player);
		cin >> player;
		
		while (!board.game_over())
		{
			cin >> board;
			cout << board;
		}


		manager.save_game(board);

		cout<< board;
		cout << "\nGame over! Would you like to continue? Y/N: ";
		cin >> contin;
	
	} while (contin == "Y" || contin == "y");

	cout << "History: \n";
	cout << manager;

	return 0;
}