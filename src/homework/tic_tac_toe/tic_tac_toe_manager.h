//h
#ifndef TIC_TAC_TOE_MANAGER_H // Header guard
#define TIC_TAC_TOE_MANAGER_H

#include <vector>
#include "tic_tac_toe.h"
#include <functional>

using std::vector;
using std::reference_wrapper;

class TicTacToeManager
{
public:
	void save_game(TicTacToe& game);
	friend ostream& operator<<(ostream& out, const TicTacToeManager& m);


private:
	void update_winner_count(string winner);

	vector<TicTacToe> games;
	vector<reference_wrapper<TicTacToe>> board; 
	//IF THERE IS A LOGIC ERROR THIS IS WHY ^^^^
	int x_wins{ 0 }; //Curley brackets are generally the recommended way
	int o_wins{ 0 }; //Of initalizing values in a class
	int ties{ 0 };
};


#endif // !TIC_TAC_TOE_MANAGER_H
