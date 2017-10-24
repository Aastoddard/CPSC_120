//
//  main.cpp
//  Chutes and Ladders
//

#include <iostream>
#include <string>    // for string
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int spinner();

int main() {
   // 10 TODO: Define the enumerated data type ChutesLadders
	enum ChutesLadders {ThirtyEight = 1, Fourteen = 4, ThirtyOne = 9, FortyTwo = 21, EightyFour = 28,
						FortyFour = 36, SixtySeven = 51, NinetyOne = 71, OneHundred = 80, Six = 16,
						TwentySix = 47, Eleven = 49, FiftyThree = 56, Nineteen = 62, Sixty = 64, TwentyFour = 87,
						SeventyThree = 93, SeventyFive = 95, SeventyEight = 98};
   
   // 20 TODO: Define variables for the program including
   //             maxium number of players (const)
   //             minimum and maximem spin values (const)
   //             winning position which is at square 100 (const)
   //             number of players (input)
	const int MAX_PLAYERS = 4, WIN_SQUARE = 100;
	int player_positions[MAX_PLAYERS], numPlayers = 0, spin_number = 0, tempSquare = 0;
	int player = 1, numberLines;
	string player_names[MAX_PLAYERS], stringLines, lines;
	unsigned seed = time(0);
	bool playerFlag = false;

	srand(seed);

	cout << "Welcome to the Chutes and Ladders Game!" << endl
		<< "Please enter the number of players playing today (at least 1, max of 4):" << endl;
	cin >> numPlayers;

	while (playerFlag == false) {

		if (!(numPlayers > 0) || numPlayers > 4) {

			cout << "Please Enter an appropriate number of players: at least 1 and no more than 4." << endl;
			cin >> numPlayers;

		}
		else {

			for (int i = 0; i < numPlayers; i++) {

				cout << "Enter Player " << i + 1 << "'s name:" << endl;
				cin >> player_names[i];
				player_positions[i] = 0;

			}

			cin.ignore();

			playerFlag = true;

		}

	}

	cout << "\nHere's how the game works:" << endl
		<< "Player's will take turns spinning a wheel to advance between 1 and 12 spaces." << endl
		<< "If a players lands on a Chute they will slide down to a lower square. If a player lands on a ladder"
		" they will climb up to a higher square." << endl << "The first player to reach square 100 wins!" << endl
		<< "If a player must land EXACLTY on square 100. If they do not then they will not move." << endl
		<< "For example: A player is on square 97, if they do not roll a 3 or less then they will not move.\n" << endl;

	 do{

		/*//DEBUGGING//
		cout << endl << numPlayers << endl;
		cout << player << endl;
		cin.ignore();*/

		if (player > numPlayers) {

			/*//DEBUGGING//
			cout << "WE GOT HERE." << endl;*/
			player = 1;
		}
		cout << player_names[player - 1] << "\'s current position is: " << player_positions[player - 1] << "." << endl;
		cout << player_names[player - 1] << ", hit [ENTER] to roll." << endl;
		cin.ignore();

		spin_number = spinner();

		cout << "You rolled a " << spin_number << "." << endl;

		tempSquare = player_positions[player - 1] + spin_number;

		/*//DEBUGGING//
		tempSquare = 100;*/

		if (tempSquare <= 100) {
			switch (tempSquare) {

			case ThirtyEight:
				stringLines = "You landed on a Ladder! Your new position is 38!\n";
				cout << stringLines << endl;
				lines.assign(stringLines.length(), '-');
				cout << lines << endl;
				player_positions[player - 1] = 38;
				break;
			case Fourteen:
				stringLines = "You landed on a Ladder! Your new position is 14!\n";
				cout << stringLines << endl;
				lines.assign(stringLines.length(), '-');
				cout << lines << endl;
				player_positions[player - 1] = 14;
				break;
			case ThirtyOne:
				stringLines = "You landed on a Ladder! Your new position is 31!\n";
				cout << stringLines << endl;
				lines.assign(stringLines.length(), '-');
				cout << lines << endl;
				player_positions[player - 1] = 31;
				break;
			case FortyTwo:
				stringLines = "You landed on a Ladder! Your new position is 42!\n";
				cout << stringLines << endl;
				lines.assign(stringLines.length(), '-');
				cout << lines << endl;
				player_positions[player - 1] = 42;
				break;
			case EightyFour:
				stringLines = "You landed on a Ladder! Your new position is 84!\n";
				cout << stringLines << endl;
				lines.assign(stringLines.length(), '-');
				cout << lines << endl;
				player_positions[player - 1] = 84;
				break;
			case FortyFour:
				stringLines = "You landed on a Ladder! Your new position is 44!\n";
				cout << stringLines << endl;
				lines.assign(stringLines.length(), '-');
				cout << lines << endl;
				player_positions[player - 1] = 44;
				break;
			case SixtySeven:
				stringLines = "You landed on a Ladder! Your new position is 67!\n";
				cout << stringLines << endl;
				lines.assign(stringLines.length(), '-');
				cout << lines << endl;
				player_positions[player - 1] = 67;
				break;
			case NinetyOne:
				stringLines = "You landed on a Ladder! Your new position is 91!\n";
				cout << stringLines << endl;
				lines.assign(stringLines.length(), '-');
				cout << lines << endl;
				player_positions[player - 1] = 91;
				break;
			case OneHundred:
				stringLines = "You landed on a Ladder! Your new position is 100!\n";
				cout << stringLines << endl;
				lines.assign(stringLines.length(), '-');
				cout << lines << endl;
				player_positions[player - 1] = 100;
				tempSquare = 100;
				break;
			case Six:
				stringLines = "You landed on a Chute! Your new position is 6!\n";
				cout << stringLines << endl;
				lines.assign(stringLines.length(), '-');
				cout << lines << endl;
				player_positions[player - 1] = 6;
				break;
			case TwentySix:
				stringLines = "You landed on a Chute! Your new position is 26!\n";
				cout << stringLines << endl;
				lines.assign(stringLines.length(), '-');
				cout << lines << endl;
				player_positions[player - 1] = 26;
				break;
			case Eleven:
				stringLines = "You landed on a Chute! Your new position is 11!\n";
				cout << stringLines << endl;
				lines.assign(stringLines.length(), '-');
				cout << lines << endl;
				player_positions[player - 1] = 11;
				break;
			case FiftyThree:
				cout << "You landed on a Chute! Your new position is 53!\n" << endl;
				lines.assign(stringLines.length(), '-');
				cout << lines << endl;
				player_positions[player - 1] = 53;
				break;
			case Nineteen:
				stringLines = "You landed on a Chute! Your new position is 19!\n";
				cout << stringLines << endl;
				lines.assign(stringLines.length(), '-');
				cout << lines << endl;
				player_positions[player - 1] = 19;
				break;
			case Sixty:
				stringLines = "You landed on a Chute! Your new position is 60!\n";
				cout << stringLines << endl;
				lines.assign(stringLines.length(), '-');
				cout << lines << endl;
				player_positions[player - 1] = 60;
				break;
			case TwentyFour:
				stringLines = "You landed on a Chute! Your new position is 24!\n";
				cout << stringLines << endl;
				lines.assign(stringLines.length(), '-');
				cout << lines << endl;
				player_positions[player - 1] = 26;
				break;
			case SeventyThree:
				stringLines = "You landed on a Chute! Your new position is 73!\n";
				cout << stringLines << endl;
				lines.assign(stringLines.length(), '-');
				cout << lines << endl;
				player_positions[player - 1] = 73;
				break;
			case SeventyFive:
				stringLines = "You landed on a Chute! Your new position is 75!\n";
				cout << stringLines << endl;
				lines.assign(stringLines.length(), '-');
				cout << lines << endl;
				player_positions[player - 1] = 75;
				break;
			case SeventyEight:
				stringLines = "You landed on a Chute! Your new position is 78!\n";
				cout << stringLines << endl;
				lines.assign(stringLines.length(), '-');
				cout << lines << endl;
				player_positions[player - 1] = 78;
				break;
			default:
				stringLines = "Your new position is " + to_string(tempSquare) + ".\n";
				cout << stringLines << endl;
				lines.assign(stringLines.length(), '-');
				cout << lines << endl;
				player_positions[player - 1] = tempSquare;

			}
		}
		else if (tempSquare > 100) {

			stringLines = "You did not move this turn.\n";
			cout << stringLines << endl;
			lines.assign(stringLines.length(), '-');
			cout << lines << endl;

		}

		player += 1;

	}while (tempSquare != WIN_SQUARE);

	cout << "Congratulations " << player_names[player - 2] << "! You won the game of Chutes and Ladders!" << endl;

	cout << "Press [ENTER] to exit." << endl;
	cin.ignore();
   
   // 30 TODO: Ask how many players will play the game
   //          Use while loop to validate the number of players
   //          (not to exceed MAX_PLAYERS and greater than zero)

   // 40 TODO: Ask for player names and initialize each player's position to 0
   // (the player is at a figurative square 0).
   //    (optional): Use arrays to store players' names & positions
   //    Note: set the size of each array to MAX_PLAYERS
   //       You haven't yet learned how to dynamically allocate arrays with
   //       different sizes

   // Optional:
   // If arrays are used to store players' names and positions, use the for loop
   // to ask for each player's name and initialize the player's position to 0
   
      // Use an array of type string to store players' names
      //    string players[MAX_PLAYERS];
   
      // Use an array of type int to initialize and store players' positions
      //    int playerPosition[MAX_PLAYERS];
  
   
         // 50 TODO: each player spins the spinner between 1 and 12
   
         // 60 TODO: Compute the player's new position based on the spin.
         //          If the new position is inside the board, move the player to
         //          the new position based on the chutes and ladders rules.
         //             (Should use SWITCH & enumerated data type ChutesLadders)
         //          If the new position is outside of the board, the player
         //          stays put.
         //          If the player lands on square 100, the player wins.
         // Hint:
         //    - Use a temp position variable to store the new landing square
         //      (player's current position plus player's spin value)
         //    - If the new landing square is still on the board, use SWITCH to
         //      to check the chute and ladder rules and adjust the landing
         //      square accordingly.
         //    - If the new landing square is beyond 100, player stays put.

   // 70 TODO: Congratulate and display the player's name who has landed on the
   //          winning square 100.

   return 0;
}


int spinner() {

	const int MIN_SPIN = 1, MAX_SPIN = 12;
	int spin = 0;

	spin = (rand() % (MAX_SPIN - MIN_SPIN + 1)) + MIN_SPIN;

	return spin;

}




