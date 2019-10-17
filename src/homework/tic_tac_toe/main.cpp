#include "tic_tac_toe.h"
#include<iostream>

using std::cout;
using std::cin;

int main() 
{
	// This comment here is only to re-push assignment with a more appropiate name
	TicTacToe board;
	string player = "X";
	string contin = "Y";
	int position;

	do
	{
		cout << "Will X or O start?: ";
		board.start_game(player);
		cin >> player;
		
		while (!board.game_over())
		{
			cin << board;
			cout >> board;
		}


		if (board.game_over())
		{
			cout >> board;
			cout << "\nGame over! Would you like to continue? Y/N: ";
			cin >> contin;
		}
	} while (contin == "Y" || contin == "y");

	return 0;
}