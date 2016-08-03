#include "card.h"

/*
 *  The constructor for the Card class.
 *  Fills the members of the Card based on the parameters
 *
 *  parameters:
 *      r - a value from the enumeration rank
 *      s - a suit from the enumeration suit
 *      ifu - a boolean tell us whether the card is face up or not
 */

Card::Card(rank r, suit s, bool ifu)
{
	this->m_Rank = r;
	this->m_Suit = s;
	this->m_IsFaceUp = ifu;
} 

/*
 * Return the blackjack numerical value of a card
 *
 * Parameters: None
 * Return:
 *      If the card is face down, return 0
 *      Otherwise follow this scheme:
 *      For an Ace, return 1
 *      For 2-9 return, return their value
 *      For 10, Jack, Queen, King return 10
 *
 */
int Card::GetValue() const
{
	if(m_IsFaceUp == false){
		return 0;
	}
	int value = m_Rank;
	if(value > 10){
		value = 10;
	}
	return value;
}

/*
 *  Flip the boolean.
 *  If the card was previously face down, now it is face up
 *  If the card was previously face up, now it is face down
 *
 *  Parameters: None
 *  Returns: None
 */
void Card::Flip()
{
	if(m_IsFaceUp == true){
		m_IsFaceUp = false;
	}
	m_IsFaceUp = true;
}


/*
 * Overloads << operator so Card object can be sent to cout
 * If a card is face down, print "XX"
 * Otherwise print the rank followed by the suit
 *
 * Parameters:
 *      lefthand side: a reference to an output stream
 *      righthand side: a reference to the card we wish to print
 *
 * Returns:
 *      a reference to an output stream
 */
std::ostream& operator<<(std::ostream& os, const Card& aCard)
{
    return os;
}
