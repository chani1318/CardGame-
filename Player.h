#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "Queue.h"

using namespace std;

class Player
{
	private:
		Queue hand;
	public:
		Player() {}
		

		void addCardtoHand(string, string);
		string draw();
		void print_hand();
};

#endif