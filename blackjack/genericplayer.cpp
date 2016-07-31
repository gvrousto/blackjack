#include "genericplayer.h"

/*
 * Constructor for a GenericPlayer.
 *
 * Parameters: A reference to a std::string
 */
GenericPlayer::GenericPlayer(const std::string& name)
{}

/*
 * Destructor for a Generic Player
 */
GenericPlayer::~GenericPlayer()  
{}

/*
 * A quick function to check if a player's hand is greater than 21
 *
 * Parameters: None
 * Returns:
 *      true if the Generic Player's hand value is greater than 21
 *      false if the Generic Player's hand value is less than 21
 */
bool GenericPlayer::IsBusted() const
{
    return false;
}

/*
 * Print a message telling the player they have busted:
 * "<name> busts.\n"
 *
 * Parameters: None
 * Returns: None
 */
void GenericPlayer::Bust() const
{}


/*
 * Overloads << operator so a GenericPlayer object can be sent to std::cout
 * If the hand is empty simply print "<empty>"
 * Otherwise print it out in the format
 * "<name>:\tCard1\t...CardN\t"
 *
 * If the total value of the player's cards is not 0, print the total in the form:
 * "(<total_value>)"
 *
 * Parameters:
 *      lefthand side: a reference to an output stream
 *      righthand side: a reference to a generic player to print out
 *
 * Returns:
 *      a reference to an output stream
 */
std::ostream& operator<<(std::ostream& os, const GenericPlayer& aGenericPlayer)
{
    return os;
}