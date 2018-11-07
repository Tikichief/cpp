/*
(3)		Implement the "Add player" menu option.Prompt the user for a new player's jersey number and rating. Append the values to the two vectors. (3pt) 
		Enter a new player's jersey number: 
		49
		Enter the player's rating: 
		8
	
(4)		Implement the "Delete player" menu option.Prompt the user for a player's jersey number. Remove the player from the roster (delete the jersey number and rating). (3pts) 
		Enter a jersey number :
		4

(5)		Implement the "Update player rating" menu option.Prompt the user for a player's jersey number. Prompt again for a new rating for the player, and then change that player's rating. (2pt)
		Enter a jersey number :
		23
		Enter a new rating for player :
		6

		(6)		Implement the "Output players above a rating" menu option.Prompt the user for a rating.Print the jersey number and rating for all players with ratings above the entered value. (2 pts)
		Enter a rating :
		5
		ABOVE 5
		Player 1 -- Jersey number : 84, Rating
		----
*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{

	// Declaring variables
	vector<int>jersey(5);
	vector<int>rating(5);
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
		cin >> rating.at(i);
		while (rating.at(i) < 1 || rating.at(i) > 9)				// input validation for rating #
		{
			cout << "Renter player " << i + 1 << "'s rating from 1 - 9:" << endl;
			cin >> rating.at(i);
		}
	}

	// Outputs roster
	cout << "\nRoster" << endl;
	for (i = 0; i < jersey.size(); ++i)
	{
		cout << "Player " << i + 1 << " -- " << "Jersey Number: " << jersey.at(i)
			<< ", " << "Rating: " << rating.at(i) << endl;
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
		cin >> userChoice;		// Promts user enter choice

		// Choice a
		if (userChoice == "a")
		{
			int addJersey, addRating;

			// Prompt user add new jersey number
			cout << "\nEnter new player's jersey number:" << endl;
			cin >> addJersey;
			jersey.push_back(addJersey);
			
			// Prompt user add new rating
			cout << "Enter new player's rating: " << endl;
			cin >> addRating;
			rating.push_back(addRating);
			
			cout << endl;
		}

		// Choice d
		if (userChoice == "d")
		{
			int jerseyNumber;

			cout << "Enter the player's jersey number" << endl;
			cin >> jerseyNumber;

			for (i = 0; i < jersey.size(); ++i)
			{
				if (jersey.at(i) == jerseyNumber)
				{
					


				}
			}

		}
		
		// Choice u
		if (userChoice == "u")
		{
			int playerJersey, updateRating;

			// Prompt user enter jersey number
			cout << "\nEnter player's jersey number:" << endl;
			cin >> playerJersey;

			for (i = 0; i < jersey.size(); ++i)
			{
				if (jersey.at(i) == playerJersey)
				{
					// Prompt user add new rating
					cout << "Enter new player's rating: " << endl;
					cin >> updateRating;
					rating.at(i) = updateRating;
				}
			}

			cout << endl;
		}
		
		// Choice r
		if (userChoice == "r")
		{
			int playerRating;
			
			// Prompts user enter a rating
			cout << "\nEnter a rating:" << endl;
			cin >> playerRating;
			
			// Outputs above player's rating
			cout << "ABOVE " << playerRating << endl;

			// Matches user's enter rating to players and displays
			for (i = 0; i < rating.size(); ++i)
			{
				if (rating.at(i) > playerRating)		// 
				{
					cout	<< "Player " << i + 1 << " -- " << "Jersey number: " << jersey.at(i) 
							<< "," << "Rating " << rating.at(i) << endl;
				}
			}

			cout << endl;
		}
		
		// Choice o
		if (userChoice == "o")
		{
			// Outputs roster
			cout << "\nRoster" << endl;
			for (i = 0; i < jersey.size(); ++i)
			{
				cout << "Player " << i + 1 << " -- " << "Jersey Number: " << jersey.at(i)
					<< ", " << "Rating: " << rating.at(i) << endl;
			}

			cout << endl;
		}

	} while (userChoice != "q");



	system("pause");
	return 0;

}
