#ifndef GAME_H
#define GAME_H

#include"globals.h"
#include "Arena.h"
#include"Player.h"


class Arena;
class Player;

class Game
{
public:
	// Constructor/destructor
	Game(int rows, int cols, int nRobots);
	~Game();

	// Mutators
	void play();

private:
	Arena* m_arena;
};


#endif 

