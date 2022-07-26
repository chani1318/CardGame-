#include<iostream>
#include "Player.h"
#include "Card.h"

using namespace std;

int main()
{
	Player p1, p2, p3, p4;
	p1.addCardtoHand("A","Heart");	//ADD CARD AT FRONT
	p1.addCardtoHand("1","Heart");	//ADD CARD AT 2ND POSITION
	p1.addCardtoHand("2","Heart");	//ADD CARD AT 3RD POSITION
	p1.addCardtoHand("3","Heart");	//ADD CARD AT 4TH POSITION
	p1.addCardtoHand("4","Heart");
	p1.addCardtoHand("5","Heart");
	p1.addCardtoHand("6","Heart");
	p1.addCardtoHand("7","Heart");
	p1.addCardtoHand("8","Heart");
	p1.addCardtoHand("9","Heart");
	p1.addCardtoHand("10","Heart");
	p1.addCardtoHand("J","Heart");
	p1.addCardtoHand("Q","Heart");
	p1.addCardtoHand("K","Heart");	//ADD CARD AT 13TH POSITION
	
	cout<<"\n\nRemoving 2 cards from HAND : \n\n";
	
	//PRINT FIRST CARD FROM QUEUE and make 2nd card as first
	cout<<p1.draw()<<" Removed From Hand"<<endl;
	
	//PRINT FIRST CARD FROM QUEUE and make 2nd card as first
	cout<<p1.draw()<<" Removed From Hand"<<endl;
	
	cout<<"\n\nPrinting all cards from HAND : \n\n";
	p1.print_hand();	//print remaining cards available in player's hand after removing 2 cards
	
	cout<<"\n\nDistructor will release memory by removing all cards : \n\n";
}