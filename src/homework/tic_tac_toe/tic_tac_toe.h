#include<string>
#include<vector>

using std::vector;
using std::string;

//h
class TicTacToe
{
public:

	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player() const;
	void display_board();

private:
	vector<string> pegs{9, " "};
	string next_player;

	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	bool check_board_full();
	void clear_board();

};