#include <iostream>
#include <string>

using namespace std;

#ifndef Card_h
#define Card_h

class Card
{
  public:
    // Constructors
    Card();

    Card(string cardValue, string cardSuit);
    
    // Functions
    string display() const;

    private:
      string value;
      string suit;
};
#endif
