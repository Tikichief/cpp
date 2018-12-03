#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;

class Car
{

public:

	string name, brand, model, year, price;
	int priceRange;

	Car(string n, int pR, string b, string m, string y, string p)
	{
		name = n;
		priceRange = pR;
		brand = b;
		model = m;
		year = y;
		price = p;
	}

	void Print()
	{
		//Display output
		cout << "\n------------- " << endl;
		cout << "Name: \t\t" << name << endl;
		cout << "Wealth: \t$" << priceRange << endl;
		cout << "Brand: \t\t" << brand << endl;
		cout << "Model: \t\t" << model << endl;
		cout << "Year: \t\t" << year << endl;
		cout << "Price: \t\t" << price << endl;
		cout << "-------------\n" << endl;
	}
};

int main()
{
	// Vector for car brands
	vector<string> carBrands(5);
	carBrands.at(0) = "Dodge";
	carBrands.at(1) = "Tesla";
	carBrands.at(2) = "Mercedes-Benz";
	carBrands.at(3) = "Nissan";
	carBrands.at(4) = "Toyota";

	// Vector for car years
	vector<string> carYear(3);
	carYear.at(0) = "2010-2013";
	carYear.at(1) = "2014-2016";
	carYear.at(2) = "2017-2019";

	// Vector for Tesla years
	vector<string> carYearT(1);
	carYearT.at(0) = "2015-2018";

	// Declaring local variables
	string userName, userAnswer, userBrand, userModel, userBrand1, buyerName, buyBrand, buyModel, buyYear, buyPrice, setPrice;
	int userPriceRange, userYear, userChoice, buyerPriceRange;

	// User input name
	cout << "Enter your name: ";
	getline(cin, userName);
	buyerName = userName;

	// User input buying car
	cout << "Would you like to buy a car? ";
	cin >> userAnswer;

	// Input validation user buying a car
	while (userAnswer == "yes" || userAnswer != "yes")

	{
		if (userAnswer == "No" || userAnswer == "no")
		{
			cout << "Okay bye then..." << endl;
			system("pause");
			return 0;
		}
		if (userAnswer == "yes" || userAnswer == "Yes")
		{
			cout << "Enter your price range: $";
			cin >> userPriceRange;
			buyerPriceRange = userPriceRange;
			if (userPriceRange < 5000)
			{
				cout << "You are broke af! ^_^ and cannot afford to buy a car at the moment." << endl;
				system("pause");
				return 0;
			}
			break;
		}
		cout << "Invalid entry! Please type [yes] or [no]: ";
		cin >> userAnswer;
	}


	/*
	else if (userAnswer == "No" || userAnswer == "no")
	{
	cout << "Okay bye then..." << endl;
	system("pause");
	return 0;
	}
	*/

	do
	{
		// Displays car brands
		cout << "\nBrand of cars" << endl;
		cout << "-------------" << endl;
		for (int i = 0; i < 5; ++i)
		{
			cout << carBrands.at(i) << endl;
		}
		cout << "-------------" << endl;

		// User inputs brand name
		cout << "Enter the [brand name] you would like to buy ";
		cout << "( enter 'q' to quit ): ";
		cin >> userBrand1;
		cout << endl;

		// Dodge
		if (userBrand1 == "Dodge" || userBrand1 == "dodge")
		{
			if (userPriceRange < 13000)
			{
				cout << "[You cannot afford the " << carBrands.at(0) << " car, please select another brand.]" << endl;
			}
			if (userPriceRange >= 13000)
			{
				cout << "Dodge Models" << endl;
				cout << "-------------" << endl;
				cout << "Challenger" << endl;
				cout << "Charger" << endl;
				cout << "-------------" << endl;
				cout << "Enter the [model name] you want to buy: ";		// User input model name
				cin >> userModel;
				if (userModel == "Challenger" || userModel == "challenger")
				{
					cout << "\n-------------";
					cout << "\nYear" << endl;
					for (int i = 0; i < 3; ++i)
					{
						cout << "[" << i + 1 << "] " << carYear.at(i) << endl;
					}
					cout << "-------------" << endl;
					cout << "Enter the [number] for the model year you want to buy: ";		// User input model year
					cin >> userYear;
					if (userYear == 1)
					{
						cout << "\nThe price range for these years are: $13,000 - $20,000." << endl;
						cout << "Would you like to buy: " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << "?" << endl;
						cout << "[1] Yes" << " [2] No : ";		// User input for buying car
						cin >> userChoice;
						// Assign local variable if user buys car
						if (userChoice == 1)
						{
							setPrice = "$13,000 - $20,000";
							buyBrand = userBrand1;
							buyModel = userModel;
							buyYear = carYear.at(userYear - 1);
							buyPrice = setPrice;
							break;
						}
						else
						{
							userChoice = 2;
						}
					}
					else if (userYear == 2)
					{
						if (userPriceRange >= 22000)
						{
							cout << "The price range for these years are: $22,000 - $30,000." << endl;
							cout << "Would you like to buy: " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << "?" << endl;
							cout << "[1] Yes" << " [2] No : ";		// User input for buying car
							cin >> userChoice;
							// Assign local variable if user buys car
							if (userChoice == 1)
							{
								setPrice = "$22,000 - $30,000";
								buyBrand = userBrand1;
								buyModel = userModel;
								buyYear = carYear.at(userYear - 1);
								buyPrice = setPrice;
								break;
							}
							else
							{
								userChoice = 2;
							}
						}
						else if (userPriceRange < 22000)
						{
							cout << "\n[You cannot afford a " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << ".]" << endl;

						}
					}
					else if (userYear == 3)
					{
						if (userPriceRange >= 35000)
						{
							cout << "Would you like to buy: " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << "?" << endl;
							cout << "[1] Yes" << " [2] No : ";		// User input for buying car
							cin >> userChoice;
							// Assign local variable if user buys car
							if (userChoice == 1)
							{
								setPrice = "$35,000 and above";
								buyBrand = userBrand1;
								buyModel = userModel;
								buyYear = carYear.at(userYear - 1);
								buyPrice = setPrice;
								break;
							}
							else
							{
								userChoice = 2;
							}
						}
						else if (userPriceRange < 35000)
						{
							cout << "\n[You cannot afford a " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << ".]" << endl;
						}
					}
				}
				if (userModel == "Charger" || userModel == "charger")
				{
					cout << "\n-------------";
					cout << "\nYear" << endl;
					for (int i = 0; i < 3; ++i)
					{
						cout << "[" << i + 1 << "] " << carYear.at(i) << endl;
					}
					cout << "-------------" << endl;
					cout << "Enter the [number] for the model year you want to buy: ";		// User input model year
					cin >> userYear;
					if (userYear == 1)
					{
						cout << "\nThe price range for these years are: $13,000 - $20,000." << endl;
						cout << "Would you like to buy: " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << "?" << endl;
						cout << "[1] Yes" << " [2] No : ";		// User input for buying car
						cin >> userChoice;
						// Assign local variable if user buys car
						if (userChoice == 1)
						{
							setPrice = "$13,000 - $20,000";
							buyBrand = userBrand1;
							buyModel = userModel;
							buyYear = carYear.at(userYear - 1);
							buyPrice = setPrice;
							break;
						}
						else
						{
							userChoice = 2;
						}
					}
					else if (userYear == 2)
					{
						if (userPriceRange >= 22000)
						{
							cout << "The price range for these years are: $22,000 - $30,000." << endl;
							cout << "Would you like to buy: " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << "?" << endl;
							cout << "[1] Yes" << " [2] No : ";		// User input for buying car
							cin >> userChoice;
							// Assign local variable if user buys car
							if (userChoice == 1)
							{
								setPrice = "$22,000 - $30,000";
								buyBrand = userBrand1;
								buyModel = userModel;
								buyYear = carYear.at(userYear - 1);
								buyPrice = setPrice;
								break;
							}
							else
							{
								userChoice = 2;
							}
						}
						else if (userPriceRange < 22000)
						{
							cout << "\n[You cannot afford a " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << ".]" << endl;
						}
					}
					else if (userYear == 3)
					{
						if (userPriceRange >= 35000)
						{
							cout << "Would you like to buy: " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << "?" << endl;
							cout << "[1] Yes" << " [2] No : ";		// User input for buying car
							cin >> userChoice;
							// Assign local variable if user buys car
							if (userChoice == 1)
							{
								setPrice = "$35,000 and above";
								buyBrand = userBrand1;
								buyModel = userModel;
								buyYear = carYear.at(userYear - 1);
								buyPrice = setPrice;
								break;
							}
							else
							{
								userChoice = 2;
							}
						}
						else if (userPriceRange < 35000)
						{
							cout << "\n[You cannot afford a " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << ".]" << endl;
						}
					}
				}
			}
		}

		// Tesla
		if (userBrand1 == "Tesla" || userBrand1 == "tesla")
		{
			if (userPriceRange < 65000)
			{
				cout << "[You cannot afford the " << carBrands.at(1) << " car, please select another brand.]" << endl;
			}
			if (userPriceRange >= 65000)
			{
				cout << "Telsa Models" << endl;
				cout << "-------------" << endl;
				cout << "Model-S" << endl;
				cout << "Model-X" << endl;
				cout << "-------------" << endl;
				cout << "Enter the [model name] you want to buy: ";		// User input model name
				cin >> userModel;
				if (userModel == "Model-S" || userModel == "model-s")
				{
					cout << "\n-------------";
					cout << "\nYear" << endl;
					for (int i = 0; i < carYearT.size(); ++i)
					{
						cout << "[" << i + 1 << "] " << carYearT.at(i) << endl;
					}
					cout << "-------------" << endl;
					cout << "Enter the [number] for the model year you want to buy: ";		// User input model year
					cin >> userYear;
					if (userYear == 1)
					{
						cout << "\nThe price range for these years are: $65,000 and above." << endl;
						cout << "Would you like to buy: " << carYearT.at(userYear - 1) << " " << userBrand1 << " " << userModel << "?" << endl;
						cout << "[1] Yes" << " [2] No : ";		// User input for buying car
						cin >> userChoice;
						// Assign local variable if user buys car
						if (userChoice == 1)
						{
							setPrice = "$65,000 and above";
							buyBrand = userBrand1;
							buyModel = userModel;
							buyYear = carYearT.at(userYear - 1);
							buyPrice = setPrice;
							break;
						}
						else
						{
							userChoice = 2;
						}
					}
				}
				if (userModel == "Model-X" || userModel == "model-x")
				{
					if (userPriceRange >= 71000)
					{
						cout << "\n-------------";
						cout << "\nYear" << endl;
						for (int i = 0; i < carYearT.size(); ++i)
						{
							cout << "[" << i + 1 << "] " << carYearT.at(i) << endl;
						}
						cout << "-------------" << endl;
						cout << "Enter the [number] for the model year you want to buy: ";		// User input model year
						cin >> userYear;
						if (userYear == 1)
						{
							cout << "\nThe price range for these years are: $70,000 and above." << endl;
							cout << "Would you like to buy: " << carYearT.at(userYear - 1) << " " << userBrand1 << " " << userModel << "?" << endl;
							cout << "[1] Yes" << " [2] No : ";		// User input for buying car
							cin >> userChoice;
							// Assign local variable if user buys car
							if (userChoice == 1)
							{
								setPrice = "$71,000 and above";
								buyBrand = userBrand1;
								buyModel = userModel;
								buyYear = carYearT.at(userYear - 1);
								buyPrice = setPrice;
								break;
							}
							else
							{
								userChoice = 2;
							}
						}
					}
					else if (userPriceRange < 71000)
					{
						cout << "\n[You cannot afford a " << carYearT.at(userYear - 1) << " " << userBrand1 << " " << userModel << ".]" << endl;
					}
				}
			}
		}

		// Mercedes-Benz
		if (userBrand1 == "Mercedes-Benz" || userBrand1 == "mercedes-benz")
		{
			if (userPriceRange < 59000)
			{
				cout << "[You cannot afford the " << carBrands.at(2) << " car, please select another brand.]" << endl;
			}
			if (userPriceRange >= 59000)
			{
				cout << "Mercedes-Benz Models" << endl;
				cout << "-------------" << endl;
				cout << "G-Class" << endl;
				cout << "Coupe" << endl;
				cout << "-------------" << endl;
				cout << "Enter the [model name] you want to buy: ";		// User input model name
				cin >> userModel;
				if (userModel == "G-Class" || userModel == "g-class")
				{
					cout << "\n-------------";
					cout << "\nYear" << endl;
					for (int i = 0; i < 3; ++i)
					{
						cout << "[" << i + 1 << "] " << carYear.at(i) << endl;
					}
					cout << "-------------" << endl;
					cout << "Enter the [number] for the model year you want to buy: ";		// User input model year
					cin >> userYear;
					if (userYear == 1)
					{
						cout << "\nThe price range for these years are: $59,000 - $71,000." << endl;
						cout << "Would you like to buy: " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << "?" << endl;
						cout << "[1] Yes" << " [2] No : ";		// User input for buying car
						cin >> userChoice;
						// Assign local variable if user buys car
						if (userChoice == 1)
						{
							setPrice = "$59,000 - $71,000";
							buyBrand = userBrand1;
							buyModel = userModel;
							buyYear = carYear.at(userYear - 1);
							buyPrice = setPrice;
							break;
						}
						else
						{
							userChoice = 2;
						}
					}
					else if (userYear == 2)
					{
						if (userPriceRange >= 74000)
						{
							cout << "The price range for these years are: $74,000 - $91,000." << endl;
							cout << "Would you like to buy: " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << "?" << endl;
							cout << "[1] Yes" << " [2] No : ";		// User input for buying car
							cin >> userChoice;
							// Assign local variable if user buys car
							if (userChoice == 1)
							{
								setPrice = "$74,000 - $91,000";
								buyBrand = userBrand1;
								buyModel = userModel;
								buyYear = carYear.at(userYear - 1);
								buyPrice = setPrice;
								break;
							}
							else
							{
								userChoice = 2;
							}
						}
						else if (userPriceRange < 74000)
						{
							cout << "\n[You cannot afford a " << carYearT.at(userYear - 1) << " " << userBrand1 << " " << userModel << ".]" << endl;
						}
					}
					else if (userYear == 3)
					{
						if (userPriceRange >= 122000)
						{
							cout << "The price range for these years are: $122,000 and above." << endl;
							cout << "Would you like to buy: " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << "?" << endl;
							cout << "[1] Yes" << " [2] No : ";		// User input for buying car
							cin >> userChoice;
							// Assign local variable if user buys car
							if (userChoice == 1)
							{
								setPrice = "$122,000 and above";
								buyBrand = userBrand1;
								buyModel = userModel;
								buyYear = carYear.at(userYear - 1);
								buyPrice = setPrice;
								break;
							}
							else
							{
								userChoice = 2;
							}
						}
						else if (userPriceRange < 122000)
						{
							cout << "\n[You cannot afford a " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << ".]" << endl;
						}
					}
				}
				if (userModel == "Coupe" || userModel == "coupe")
				{
					if (userPriceRange >= 7000)
					{
						cout << "\n-------------";
						cout << "\nYear" << endl;
						for (int i = 0; i < 3; ++i)
						{
							cout << "[" << i + 1 << "] " << carYear.at(i) << endl;
						}
						cout << "-------------" << endl;
						cout << "Enter the [number] for the model year you want to buy: ";		// User input model year
						cin >> userYear;
						if (userYear == 1)
						{
							cout << "\nThe price range for these years are: $7,000 - $11,000." << endl;
							cout << "Would you like to buy " << carYear.at(userYear - 1) << " " << userBrand1 << "?" << endl;
							cout << "[1] Yes" << " [2] No : ";		// User input for buying car
							cin >> userChoice;
							// Assign local variable if user buys car
							if (userChoice == 1)
							{
								setPrice = "$7,000 - $11,000";
								buyBrand = userBrand1;
								buyModel = userModel;
								buyYear = carYear.at(userYear - 1);
								buyPrice = setPrice;
								break;
							}
							else
							{
								userChoice = 2;
							}
						}
						else if (userYear == 2)
						{
							if (userPriceRange >= 14000)
							{
								cout << "The price range for these years are: $14,000 - $18,000." << endl;
								cout << "Would you like to buy " << carYear.at(userYear - 1) << " " << userBrand1 << "?" << endl;
								cout << "[1] Yes" << " [2] No : ";		// User input for buying car
								cin >> userChoice;
								// Assign local variable if user buys car
								if (userChoice == 1)
								{
									setPrice = "$14,000 - $18,000";
									buyBrand = userBrand1;
									buyModel = userModel;
									buyYear = carYear.at(userYear - 1);
									buyPrice = setPrice;
									break;
								}
								else
								{
									userChoice = 2;
								}
							}
							else if (userPriceRange < 14000)
							{
								cout << "\n[You cant afford a " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << ".]" << endl;
							}
						}
						else if (userYear == 3)
						{
							if (userPriceRange >= 20000)
							{
								cout << "Would you like to buy " << carYear.at(userYear - 1) << " " << userBrand1 << "?" << endl;
								cout << "[1] Yes" << " [2] No : ";		// User input for buying car
								cin >> userChoice;
								// Assign local variable if user buys car
								if (userChoice == 1)
								{
									setPrice = "$20,000 and above";
									buyBrand = userBrand1;
									buyModel = userModel;
									buyYear = carYear.at(userYear - 1);
									buyPrice = setPrice;
									break;
								}
								else
								{
									userChoice = 2;
								}
							}
							else if (userPriceRange < 20000)
							{
								cout << "\n[You cannot afford a " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << ".]" << endl;
							}
						}
					}
					else if (userPriceRange < 7000)
					{
						cout << "\n[You cannot afford a " << userBrand1 << " " << userModel << "]" << endl;
					}
				}
			}
		}

		// Nissan
		if (userBrand1 == "Nissan" || userBrand1 == "nissan")
		{
			if (userPriceRange < 6000)
			{
				cout << "[You cannot afford the " << carBrands.at(3) << " car, please select another brand.]" << endl;
			}
			if (userPriceRange >= 6000)
			{
				cout << "Nissan Models" << endl;
				cout << "-------------" << endl;
				cout << "Altima" << endl;
				cout << "Maxima" << endl;
				cout << "-------------" << endl;
				cout << "Enter the [model name] you want to buy: ";		// User input model name
				cin >> userModel;
				if (userModel == "Altima" || userModel == "altima")
				{
					cout << "\n-------------";
					cout << "\nYear" << endl;
					for (int i = 0; i < 3; ++i)
					{
						cout << "[" << i + 1 << "] " << carYear.at(i) << endl;
					}
					cout << "-------------" << endl;
					cout << "Enter the [number] for the model year you want to buy: ";		// User input model year
					cin >> userYear;
					if (userYear == 1)
					{
						cout << "\nThe price range for these years are: $6,000 - $12,000." << endl;
						cout << "Would you like to buy: " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << "?" << endl;
						cout << "[1] Yes" << " [2] No : ";		// User input for buying car
						cin >> userChoice;
						// Assign local variable if user buys car
						if (userChoice == 1)
						{
							setPrice = "$6,000 - $12,000";
							buyBrand = userBrand1;
							buyModel = userModel;
							buyYear = carYear.at(userYear - 1);
							buyPrice = setPrice;
							break;
						}
						else
						{
							userChoice = 2;
						}
					}
					else if (userYear == 2)
					{
						if (userPriceRange >= 13000)
						{
							cout << "The price range for these years a    - $19,000." << endl;
							cout << "Would you like to buy: " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << "?" << endl;
							cout << "[1] Yes" << " [2] No : ";		// User input for buying car
							cin >> userChoice;
							// Assign local variable if user buys car
							if (userChoice == 1)
							{
								setPrice = "$13,000 - $19,000";
								buyBrand = userBrand1;
								buyModel = userModel;
								buyYear = carYear.at(userYear - 1);
								buyPrice = setPrice;
								break;
							}
							else
							{
								userChoice = 2;
							}
						}
						else if (userPriceRange < 13000)
						{
							cout << "\n[You cannot afford a " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << ".]" << endl;
						}
					}
					else if (userYear == 3)
					{
						if (userPriceRange >= 21000)
						{
							cout << "\nThe price range for these years are: $21,000 and above." << endl;
							cout << "Would you like to buy: " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << "?" << endl;
							cout << "[1] Yes" << " [2] No : ";		// User input for buying car
							cin >> userChoice;
							// Assign local variable if user buys car
							if (userChoice == 1)
							{
								setPrice = "$21,000 and above";
								buyBrand = userBrand1;
								buyModel = userModel;
								buyYear = carYear.at(userYear - 1);
								buyPrice = setPrice;
								break;
							}
							else
							{
								userChoice = 2;
							}
						}
						else if (userPriceRange < 21000)
						{
							cout << "\n[You cannot afford a " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << ".]" << endl;
						}
					}
				}
				if (userModel == "Maxima" || userModel == "maxima")
				{
					if (userPriceRange >= 7000)
					{
						cout << "\n-------------";
						cout << "\nYear" << endl;
						for (int i = 0; i < 3; ++i)
						{
							cout << "[" << i + 1 << "] " << carYear.at(i) << endl;
						}
						cout << "-------------" << endl;
						cout << "Enter the [number] for the model year you want to buy: ";		// User input model year
						cin >> userYear;
						if (userYear == 1)
						{
							cout << "\nThe price range for these years are: $7,000 - $12,000." << endl;
							cout << "Would you like to buy " << carYear.at(userYear - 1) << " " << userBrand1 << "?" << endl;
							cout << "[1] Yes" << " [2] No : ";		// User input for buying car
							cin >> userChoice;
							// Assign local variable if user buys car
							if (userChoice == 1)
							{
								setPrice = "$7,000 - $12,000";
								buyBrand = userBrand1;
								buyModel = userModel;
								buyYear = carYear.at(userYear - 1);
								buyPrice = setPrice;
								break;
							}
							else
							{
								userChoice = 2;
							}
						}
						else if (userYear == 2)
						{
							if (userPriceRange >= 13000)
							{
								cout << "The price range for these years are: $13,000 - $20,000." << endl;
								cout << "Would you like to buy " << carYear.at(userYear - 1) << " " << userBrand1 << "?" << endl;
								cout << "[1] Yes" << " [2] No : ";		// User input for buying car
								cin >> userChoice;
								// Assign local variable if user buys car
								if (userChoice == 1)
								{
									setPrice = "$13,000 - $20,000";
									buyBrand = userBrand1;
									buyModel = userModel;
									buyYear = carYear.at(userYear - 1);
									buyPrice = setPrice;
									break;
								}
								else
								{
									userChoice = 2;
								}
							}
							else if (userPriceRange < 13000)
							{
								cout << "\n[You cannot afford a " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << ".]" << endl;
							}
						}
						else if (userYear == 3)
						{
							if (userPriceRange >= 24000)
							{
								cout << "\nThe price range for these years are: $24,000 and above." << endl;
								cout << "Would you like to buy " << carYear.at(userYear - 1) << " " << userBrand1 << "?" << endl;
								cout << "[1] Yes" << " [2] No : ";		// User input for buying car
								cin >> userChoice;
								// Assign local variable if user buys car
								if (userChoice == 1)
								{
									setPrice = "$24,000 and above";
									buyBrand = userBrand1;
									buyModel = userModel;
									buyYear = carYear.at(userYear - 1);
									buyPrice = setPrice;
									break;
								}
								else
								{
									userChoice = 2;
								}
							}
							else if (userPriceRange < 24000)
							{
								cout << "\n[You cannot afford a " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << ".]" << endl;
							}
						}
					}
					else if (userPriceRange < 7000)
					{
						cout << "\n[You cannot afford a " << userBrand1 << " " << userModel << "]" << endl;
					}
				}
			}
		}

		// Toyota
		if (userBrand1 == "Toyota" || userBrand1 == "toyota")
		{
			if (userPriceRange < 6000)
			{
				cout << "[You cannot afford the " << carBrands.at(4) << " car, please select another brand.]" << endl;
			}
			if (userPriceRange >= 5000)
			{
				cout << "Nissan Models" << endl;
				cout << "-------------" << endl;
				cout << "Corolla" << endl;
				cout << "Camry" << endl;
				cout << "-------------" << endl;
				cout << "Enter the [model name] you want to buy: ";		// User input model name
				cin >> userModel;
				if (userModel == "Corolla" || userModel == "corolla")
				{
					cout << "\n-------------";
					cout << "\nYear" << endl;
					for (int i = 0; i < 3; ++i)
					{
						cout << "[" << i + 1 << "] " << carYear.at(i) << endl;
					}
					cout << "-------------" << endl;
					cout << "Enter the [number] for the model year you want to buy: ";		// User input model year
					cin >> userYear;
					if (userYear == 1)
					{
						cout << "\nThe price range for these years are: $5,000 - $8,000." << endl;
						cout << "Would you like to buy: " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << "?" << endl;
						cout << "[1] Yes" << " [2] No : ";		// User input for buying car
						cin >> userChoice;
						// Assign local variable if user buys car
						if (userChoice == 1)
						{
							setPrice = "$5,000 - $8,000";
							buyBrand = userBrand1;
							buyModel = userModel;
							buyYear = carYear.at(userYear - 1);
							buyPrice = setPrice;
							break;
						}
						else
						{
							userChoice = 2;
						}
					}
					else if (userYear == 2)
					{
						if (userPriceRange >= 10000)
						{
							cout << "The price range for these years are: $10,000 - $13,000." << endl;
							cout << "Would you like to buy: " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << "?" << endl;
							cout << "[1] Yes" << " [2] No : ";		// User input for buying car
							cin >> userChoice;
							// Assign local variable if user buys car
							if (userChoice == 1)
							{
								setPrice = "$10,000 - $13,000";
								buyBrand = userBrand1;
								buyModel = userModel;
								buyYear = carYear.at(userYear - 1);
								buyPrice = setPrice;
								break;
							}
							else
							{
								userChoice = 2;
							}
						}
						else if (userPriceRange < 10000)
						{
							cout << "\n[You cannot afford a " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << ".]" << endl;
						}
					}
					else if (userYear == 3)
					{
						if (userPriceRange >= 14000)
						{
							cout << "\nThe price range for these years are: $14,000 and above." << endl;
							cout << "Would you like to buy: " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << "?" << endl;
							cout << "[1] Yes" << " [2] No : ";		// User input for buying car
							cin >> userChoice;
							// Assign local variable if user buys car
							if (userChoice == 1)
							{
								setPrice = "$14,000 and above";
								buyBrand = userBrand1;
								buyModel = userModel;
								buyYear = carYear.at(userYear - 1);
								buyPrice = setPrice;
								break;
							}
							else
							{
								userChoice = 2;
							}
						}
						else if (userPriceRange < 14000)
						{
							cout << "\n[You cannot afford a " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << ".]" << endl;
						}
					}
				}
				if (userModel == "Camry" || userModel == "camry")
				{
					if (userPriceRange >= 7000)
					{
						cout << "\n-------------";
						cout << "\nYear" << endl;
						for (int i = 0; i < 3; ++i)
						{
							cout << "[" << i + 1 << "] " << carYear.at(i) << endl;
						}
						cout << "-------------" << endl;
						cout << "Enter the [number] for the model year you want to buy: ";		// User input model year
						cin >> userYear;
						if (userYear == 1)
						{
							cout << "\nThe price range for these years are: $7,000 - $11,000." << endl;
							cout << "Would you like to buy: " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << "?" << endl;
							cout << "[1] Yes" << " [2] No : ";		// User input for buying car
							cin >> userChoice;
							// Assign local variable if user buys car
							if (userChoice == 1)
							{
								setPrice = "$7,000 - $11,000";
								buyBrand = userBrand1;
								buyModel = userModel;
								buyYear = carYear.at(userYear - 1);
								buyPrice = setPrice;
								break;
							}
							else
							{
								userChoice = 2;
							}
						}
						else if (userYear == 2)
						{
							if (userPriceRange >= 14000)
							{
								cout << "The price range for these years are: $14,000 - $18,000." << endl;
								cout << "Would you like to buy: " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << "?" << endl;
								cout << "[1] Yes" << " [2] No : ";		// User input for buying car
								cin >> userChoice;
								// Assign local variable if user buys car
								if (userChoice == 1)
								{
									setPrice = "$14,000 - $18,000";
									buyBrand = userBrand1;
									buyModel = userModel;
									buyYear = carYear.at(userYear - 1);
									buyPrice = setPrice;
									break;
								}
								else
								{
									userChoice = 2;
								}
							}
							else if (userPriceRange < 14000)
							{
								cout << "\n[You cannot afford a " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << ".]" << endl;
							}
						}
						else if (userYear == 3)
						{
							if (userPriceRange >= 20000)
							{
								cout << "\nThe price range for these years are: $20,000 and above." << endl;
								cout << "Would you like to buy: " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << "?" << endl;
								cout << "[1] Yes" << " [2] No : ";		// User input for buying car
								cin >> userChoice;
								// Assign local variable if user buys car
								if (userChoice == 1)
								{
									setPrice = "$20,000 and above";
									buyBrand = userBrand1;
									buyModel = userModel;
									buyYear = carYear.at(userYear - 1);
									buyPrice = setPrice;
									break;
								}
								else
								{
									userChoice = 2;
								}
							}
							else if (userPriceRange < 20000)
							{
								cout << "\n[You cannot afford a " << carYear.at(userYear - 1) << " " << userBrand1 << " " << userModel << ".]" << endl;
							}
						}
					}
					else if (userPriceRange < 7000)
					{
						cout << "\n[You cannot afford a " << userBrand1 << " " << userModel << "]" << endl;
					}
				}
			}
		}

	} while (userBrand1 != "q");

	// Creates Object, set funtions, call functions
	if (userChoice == 1)
	{
		Car Buy(buyerName, buyerPriceRange, buyBrand, buyModel, buyYear, buyPrice);
		Buy.Print();
	}
	else if (userChoice == 2)
	{
		cout << "You decided not to buy a car. =(" << endl;
	}

	system("pause");
	return 0;
}





/*
class Car
{
private:
string carBrand, carModel;
string year, price;

public:
void setCarBrand(string cb)
{
carBrand = cb;
}
void setCarModel(string cm)
{
carModel = cm;
}
void setCarYear(string y)
{
year = y;
}
void setCarprice(string p)
{
price = p;
}

string getCarBrand()
{
return carBrand;
}

string getCarModel()
{
return carModel;
}

string getCarYear()
{
return year;
}

string getCarPrice()
{
return price;
}
};
*/

/*
// Creates Object, set funtions, call functions
if (userChoice == 1)
{
Car Buy;
Buy.setCarBrand(buyBrand);
Buy.setCarModel(buyModel);
Buy.setCarYear(buyYear);
Buy.setCarprice(buyPrice);

//Display output
cout << "\n------------- " << endl;
cout << "Name: \t\t" << userName << endl;
cout << "Wealth: \t$" << userPriceRange << endl;
cout << "Brand: \t\t" << Buy.getCarBrand() << endl;
cout << "Model: \t\t" << Buy.getCarModel() << endl;
cout << "Year: \t\t" << Buy.getCarYear() << endl;
cout << "Price: \t\t" << Buy.getCarPrice() << endl;
cout << "-------------\n" << endl;
}
else if (userChoice == 2)
{
cout << "You decided not to buy a car. =(" << endl;
}
*/

/*
#include<iostream>
#include<string>
using namespace std;

class Test {
	
public:

	int x, y;

	Test(int a, int b) {
		x = a;
		y = b;
	}

	void print() {
		cout << x << ", " << y << endl;
	}
};

int main() {

	Test A(10, 40);
	A.print();

	system("pause");
	return 0;
}
*/
