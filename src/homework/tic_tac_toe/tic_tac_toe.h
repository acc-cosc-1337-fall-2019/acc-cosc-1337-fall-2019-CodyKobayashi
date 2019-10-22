#include<string>
#include<vector>
#include <iostream>


#ifndef TIC_TAC_TOE_H //Header guard, prevents errors if the
#define TIC_TAC_TOE_H //Compiler makes a copy of Tic Tac Toe

using std::vector;
using std::string;
using std::ostream;

//h
class TicTacToe
{
public:

	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player() const;
	string get_winner() const;

	friend std::istream & operator>> (std::istream & in,  TicTacToe & board);
	friend std::ostream & operator<< (std::ostream & out, TicTacToe & board);

private:
	vector<string> pegs{9, " "};
	string next_player;
	string winner;

	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	bool check_board_full();
	void clear_board();
	void set_winner();

};

#endif // TIC_TAC_TOE_H