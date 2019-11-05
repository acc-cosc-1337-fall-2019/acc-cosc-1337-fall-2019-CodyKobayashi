//cpp
#include "tic_tac_toe.h"

using std::cout;

bool TicTacToe::game_over()
{
	if (check_column_win() || check_row_win() ||
		check_diagonal_win())
	{
		set_winner();
		return true;
	}
	if (check_board_full())
	{
		winner = "C";
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

void TicTacToe::display_beginning_board(TicTacToe & board) // Display purposes, should not effect code
{
	if (board.pegs.size() == 16)
	{
		for (int i = 1; i < 8; i += 4)
		{
			std::cout << i << " | " << i + 1 << " | " << i + 2 << "  | " << i + 3 << " \n";
		}
		std::cout << "9 | 10| 11 | 12" << "\n";
		for (int i = 13; i < 16; i += 4)
		{
			std::cout << i << " |" << i + 1 << " |" << i + 2 << " |" << i + 3 << " \n";
		}
	}

	if (board.pegs.size() == 9)
	{
		for (int i = 1; i < 9; i += 3)
		{
			std::cout << i << "|" << i + 1 << "|" << i + 2 << "\n";
		}
	}

}


string TicTacToe::get_player() const
{
	return next_player;
}

string TicTacToe::get_winner() const
{
	return winner;
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
	return false;
}

bool TicTacToe::check_row_win()
{
	return false;
}

bool TicTacToe::check_diagonal_win()
{
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

void TicTacToe::set_winner()
{

	if (next_player == "X")
	{
		winner = "O";
	}
	else 
	{
		winner = "X";
	}
}

std::istream & operator>>(std::istream & in, TicTacToe & board)
{ // make these work with both TTT
	int pos;
	cout << "Enter for " << board.get_player() << ": ";
	in >> pos;
	board.mark_board(pos);
	return in;
}

std::ostream & operator<<(std::ostream & out, TicTacToe & board)
{ // make these work with both TTT
	std::size_t board_size = board.pegs.size();

	if (board_size == 9)
	{
		for (std::size_t i = 0; i < 9; i += 3)
		{
			out << board.pegs[i] << "|" << board.pegs[i + 1] << "|" << board.pegs[i + 2] << "\n";
		}
		return out;
	}

	if (board_size == 16)
	{
		for (std::size_t i = 0; i < 16; i += 4)
		{
			out << board.pegs[i] << "|" << board.pegs[i + 1] << "|" << board.pegs[i + 2] 
				<< "|" << board.pegs[i + 3] << "\n";
		}
		return out;
	}

	
	out << "Something have went terribly wrong/invalid board size";
	return out;

}
	
