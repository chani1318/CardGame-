#include <iostream>
#include "Player.h"

using namespace std;


void Player::addCardtoHand(string cv, string cs)
{
	//creating object of card by passing vaoue of cadr value anc card suit
	Card temp(cv, cs);
	
	//adding newly created card into Player's Hand. (Hand is an object of Queue)
	//So card is added into queue.
	hand.add(temp);
}

string Player::draw()
{
	Card temp = hand.remove();
	return temp.display();
}

void Player::print_hand()
{
	hand.PrintAllCards();
}