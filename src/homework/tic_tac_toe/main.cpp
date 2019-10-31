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

	TicTacToeManager manager;
	string player = "X";
	string contin = "Y";
	int game_type;

	do
	{
		TicTacToe* board;

		cout << "Play win by 3 or 4: ";
		cin >> game_type;

		if (game_type == 3)
		{
			board = new TicTacToe3();
		}
		else
		{
			board = new TicTacToe4();
		}


		cout << "Will X or O start?: ";
		board->start_game(player);
		cin >> player;
		
		while (!board->game_over())
		{
			cin >> *board;
			cout <<*board;
		}


		manager.save_game(*board);

		cout<< board;
		cout << "\nGame over! Would you like to continue? Y/N: ";
		cin >> contin;
	
	} while (contin == "Y" || contin == "y");

	cout << "History: \n";
	cout << manager;

	return 0;
}