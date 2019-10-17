//cpp
#include "tic_tac_toe.h"
#include <iostream>

using std::cout;

bool TicTacToe::game_over()
{
	if (check_column_win() || check_row_win() ||
		check_diagonal_win() || check_board_full())
	{
		return true;
	}
	else
	{
		return false;
	}
}

void TicTacToe::start_game(string player)
{
	next_player = player;
	clear_board();
}

// Remember postiton is what user sees!
// When you save position to vector subtract 1 from position!

void TicTacToe::mark_board(int position)
{
	pegs[position - 1] = next_player;
	set_next_player();
}

string TicTacToe::get_player() const
{
	return next_player;
}


void TicTacToe::set_next_player()
{
	if (next_player == "X")
	{
		next_player = "O";
	}
	else
	{
		next_player = "X";
	}
}

bool TicTacToe::check_column_win()
{
	for (std::size_t i = 0; i < 3; i++)
	{
		if (pegs[i] == pegs[i + 3] && pegs[i + 3] == pegs[i + 6] 
			&& pegs[i + 6] != " ")
		{
			return true;
		}
	}

	return false;
}

bool TicTacToe::check_row_win()
{
	
	for (std::size_t i = 0; i < 9; i += 3)
	{
		if (pegs[i] == pegs[i + 1] && pegs[i + 1] == pegs[i + 2]
			&& pegs[i + 2] != " ")
		{
			return true;
		}
	}
	
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	
	if (pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[4] != " ")
	{
		return true;
	}
	if (pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[4] != " ")
	{
		return true;
	} 
	/* I realized that diagonally starting from 0 to 8 it increments by 4, and 2 to 6 it increments by 2
	   but I felt there is no real reason to have 2 for loops which takes more processing*/
	return false;
}

bool TicTacToe::check_board_full() 
{

	for (auto x : pegs) // Gets what ever is in the space of the vector
	{
		if (x == " ")
		{
			return false;
		}
	}
	return true;

}

void TicTacToe::clear_board()
{
	if (game_over())
	{
		for (int i = 0; i < pegs.size(); i++)
		{
			pegs[i] = " "; //Changes every 1 space to a "space" hur hur... pun
		}
	}
}

std::istream & operator<<(std::istream & in, TicTacToe & board)
{
	int pos;
	cout << "Enter for " << board.get_player() << ": ";
	in >> pos;
	board.mark_board(pos);
	return in;
}

std::ostream & operator>>(std::ostream & out, TicTacToe & board)
{
	for (std::size_t i = 0; i < 9; i += 3)
	{
		out << board.pegs[i] << "|" << board.pegs[i + 1] << "|" << board.pegs[i + 2] << "\n";
	}
	return out;
}
