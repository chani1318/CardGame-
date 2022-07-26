#include <iostream>
#include "Queue.h" 	//adding Card Class to access object of it.

using namespace std;

//default constructir to initialize FRON and END as null pointer
Queue::Queue()
{
	 front = NULL;
	 end = NULL; 
}

// Destructor of class to release allocated memory
Queue::~Queue()
{
	//Assigning FRONT to TEMP node
	NodePointer temp = front;
	
	//LOOP to deleting all nodes from the queue
	while (temp != NULL) 
	{
		front = temp->next;
		cout << temp->card.display()<<", ";
		delete temp;
		temp = front;
	}
}

//Finction to Add CARD into the Queue
void Queue::add(Card newCard)
{
	// add to the end
	NodePointer insert = new Node;
	insert->card = newCard;
	insert->next = NULL;

	if (front == NULL)
		front = insert;
	else
		end->next = insert;
	end = insert;
}

//function to rempve the first (FRONT) element from the QUEUE
Card Queue::remove()
{
	//if queue is EMPTY then print message and return.
	if (empty())
	{
		cout << "Queue is EMPTY...!!!\n";
		exit(1);
	}
	NodePointer temp = front;
	Card c = temp->card;
	front = temp->next;
	
	//releasing the memory of POPED element from the queue.
	delete temp;
	return c;
}

//finction to check whether que is EMPTY or not.
bool Queue::empty() const
{
	if (front == NULL)
		return true;
	return false;
}

void Queue::PrintAllCards()
{
	NodePointer print = front;
	while (print != NULL)
	{
		//calling the finction of CARD class to print the FACE and VALUE of particular card object.
		cout << print->card.display() << endl;
		//Nevigating pointer to the next card
		print = print->next;
	}
}