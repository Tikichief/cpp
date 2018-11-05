/*
Kareem Gourdine
7 Nov 2018

Week 12 Lab 1
This program will store roster and rating information for a soccer team. Coaches rate players during tryouts to ensure a balanced team.

(1)		Prompt the user to input five pairs of numbers: A player's jersey number (0 - 99) and the player's rating (1 - 9). 
		Store the jersey numbers in one int vector and the ratings in another int vector. Output these vectors (i.e., output the roster). 
		Implement the "Output roster" menu option. (7 +3 pts)

		Enter player 1's jersey number:
		84
		Enter player 1's rating:
		7
		Enter player 2's jersey number:
		23
		Enter player 2's rating:
		4
		Enter player 3's jersey number:
		4
		Enter player 3's rating:
		5
		Enter player 4's jersey number:
		30 Enter player 4's rating:
		2
		Enter player 5's jersey number:
		66
		Enter player 5's rating:
		9

		Implement the "Output roster" menu option ( 3 pts)
		ROSTER
		Player 1 -- Jersey number: 84, Rating: 7
		Player 2 -- Jersey number: 23, Rating: 4
		...

(2)		Implement a menu of options for a user to modify the roster. Each option is represented by a single character. 
		The program initially outputs the menu, and outputs the menu after a user chooses an option. 
		The program ends when the user chooses the option to Quit. For this step, the other options do nothing. (5 pts)

		MENU
		a - Add player
		d - Remove player
		u - Update player rating
		r - Output players above a rating
		o - Output roster
		q - Quit Choose an option:

Hint: Use do while loop
Save this lab we will add more on Wednesday.
*/



#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	
	// Declaring variables
	const int NUM_PLAYERS = 5;
	vector<int>jersey(NUM_PLAYERS);
	int rating[NUM_PLAYERS];
	int i;
	string userChoice;

	// User input for player's jersey #'s and ratings
	for (i = 0; i < jersey.size(); ++i)
	{
		cout << "Enter player " << i + 1 << "'s " << "jersey's number:" << endl;
		cin >> jersey.at(i);
		while (jersey.at(i) < 0 || jersey.at(i) > 99)		// input validation for jersey #
		{
			cout << "Renter player " << i + 1 << "'s jersey number from 0 - 99:" << endl;
			cin >> jersey.at(i);
		}
		cout << "Enter player " << i + 1 << "'s " << "rating:" << endl;
		cin >> rating[i];
		while (rating[i] < 1 || rating[i] > 9)				// input validation for rating #
		{
			cout << "Renter player " << i + 1 << "'s rating from 1 - 9:" << endl;
				cin >> rating[i];
		}
	}

	cout << endl;

	// Outputs roster
	cout << "Roster" << endl;
	for (i = 0; i < NUM_PLAYERS; ++i)
	{
		cout	<< "Player " << i + 1 << " -- " << "Jersey Number: " << jersey.at(i) 
				<< ", " << "Rating: " << rating[i] << endl;
	}

	cout << endl;

	// Outputs menu
	do 
	{
		cout << "Menu"
			<< "\na - Add Player"
			<< "\nd - Remove Player"
			<< "\nu - Update player rating"
			<< "\nr - Output players above rating"
			<< "\no - Output roster"
			<< "\nq - Quit" 
			<< "\nChoose an option: ";
		cin >> userChoice;
	} while (userChoice != "q");

	system("pause");
	return 0;

}
