#include "tic_tac_toe.h"
#include<iostream>

using std::cout;
using std::cin;

int main() 
{
	TicTacToe board;
	string player = "X";
	string contin = "Y";
	int position;

	cout << "Will X or O start?: ";
	board.start_game(player);
	cin >> player;
	do
	{

		board.display_board();
		cout << "\nEnter for: " << board.get_player();
		cin >> position;
		board.mark_board(position);

		if (board.game_over())
		{
			board.display_board();
			cout << "\nGame over! Would you like to continue? Y/N: ";
			cin >> contin;
			board.start_game(player);
		}
	} while (contin == "Y" || contin == "y");

	return 0;
}