#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include "Card.h" 	//adding Card Class to access object of it.

using namespace std;

struct Node 
{
	//an object of card which store face and value of each card
	Card card;
	//to store the reference of next node
	Node *next;
};
typedef Node* NodePointer;

class Queue
{
	private:
		NodePointer front;
		NodePointer end;
	public:
		
		//Constructors of class
		Queue();						//default constructir to initialize FRON and END as null pointer
		
		// Destructor of class
		~Queue();					//to release allocated memory

		// Member Functions of class
		void add(Card newCard);		//Add CARD into the Queue
		Card remove();				//Remove and return the front CARD from the Queue if queue is not empty
		void PrintAllCards();		// Finction to PRINT all cards from FRONT to END
		bool empty() const;			//To check whether the Queue is empty
};
#endif