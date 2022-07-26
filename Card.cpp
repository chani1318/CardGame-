#include <iostream>
#include <cmath>
#include "Card.h"

using namespace std;

// ====== Card Class ====== //

// Constructors

Card::Card() {}

Card::Card(string cardValue, string cardSuit) : value(cardValue), suit(cardSuit) {}

// Functions

string Card::display() const
{
  return (value + " of " + suit);
}