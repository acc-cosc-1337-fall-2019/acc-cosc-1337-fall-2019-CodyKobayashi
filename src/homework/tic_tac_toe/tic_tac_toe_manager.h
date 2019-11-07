//h
#ifndef TIC_TAC_TOE_MANAGER_H // Header guard
#define TIC_TAC_TOE_MANAGER_H

#include <vector>
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <memory>

using std::vector;
using std::unique_ptr;

class TicTacToeManager
{
public:
	void save_game(unique_ptr<TicTacToe>& game);
	void get_winner_totals(int& x, int& o, int& c);
	unique_ptr<TicTacToe>get_game(int game_type);
	friend ostream& operator<<(ostream& out, const TicTacToeManager& m);

	const std::vector<std::unique_ptr<TicTacToe>>& get_games();

private:
	void update_winner_count(string winner);

	vector<unique_ptr<TicTacToe>> games;
	vector<unique_ptr<TicTacToe>> board; 
	//IF THERE IS A LOGIC ERROR THIS IS WHY ^^^^
	int x_wins{ 0 }; //Curley brackets are generally the recommended way
	int o_wins{ 0 }; //Of initalizing values in a class
	int ties{ 0 };
};


#endif // !TIC_TAC_TOE_MANAGER_H
