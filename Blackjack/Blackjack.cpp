/*
Write a command line game that plays a simple version of blackjack. The program
should generate a random number between 1 and 10 each time the player gets a 
card. Each of the values (1 through 10) must be equally likely. (In other 
words, this won't be like real black jack where getting a 10 is more likely 
than getting some other value, because in real black jack all face cards count 
as 10.) It should keep a running total of the player's cards, and ask the 
player whether or not it should deal another card. If the player hits 21 
exactly, the program should print "Congratulations!" and then ask if the player 
wants to play again. If the player exceeds 21, the program should print "Bust" 
and then ask if the player wants to play again. Sample output for the game is 
provided below. Your program should produce the same output.
*/

#include <iostream>
using namespace std;

int main(){
    int total = 0;
    int firstCard = 0;
    int secondCard;
    char again = 'y';

    while (again == 'y' || again == 'Y') {
        firstCard = (rand() % 10) + 1;
        secondCard = (rand() % 10) + 1;

        cout << "First cards: " << firstCard << ", " << secondCard << endl;

    }




}

