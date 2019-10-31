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
	TicTacToe() {}; // Go find out why you needed this
	TicTacToe(int size) : pegs(size * size, " ") {}; // Since TicTacToe4 needs a different size
	
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player() const;
	string get_winner() const;

	friend std::istream & operator>> (std::istream & in,  TicTacToe & board);
	friend std::ostream & operator<< (std::ostream & out, TicTacToe & board);

protected:
	virtual bool check_column_win();
	virtual bool check_row_win();
	virtual bool check_diagonal_win();
	vector<string> pegs; // Initializer

private:
	string next_player;
	string winner;
	void set_next_player();
	bool check_board_full();
	void clear_board();
	void set_winner();

};

#endif // TIC_TAC_TOE_H