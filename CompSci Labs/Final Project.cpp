#include<iostream>
#include<string>
#include<vector>
using namespace std;

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

int main()
{
	vector<string> carBrands(5);
	carBrands.at(0) = "Dodge";
	carBrands.at(1) = "Tesla";
	carBrands.at(2) = "Mercedes-Benz";
	carBrands.at(3) = "Nissan";
	carBrands.at(4) = "Toyota";

	vector<string> carYear(3);
	carYear.at(0) = "2010-2013";
	carYear.at(1) = "2014-2016";
	carYear.at(2) = "2017-2019";



	string userName, userAnswer, userBrand, userModel, userBrand1, buyBrand, buyModel, buyYear, buyPrice, setPrice;
	int userPriceRange, userYear, userChoice;

	cout << "Enter your name: ";
	getline(cin, userName);

	cout << "Would you like to buy a car? ";
	cin >> userAnswer;
	while (userAnswer != "yes" || userAnswer != "no")
	{
		cout << "Invalid entry! Please type 'Yes' or 'No'.";
		cin >> userAnswer;
	}

	if (userAnswer == "yes" || userAnswer == "yes")
	{
		cout << "Enter your price range: $";
		cin >> userPriceRange;
		if (userPriceRange < 5000)
		{
			cout << "You are broke af! ^_^ and cannot afford to buy a car at the moment." << endl;
			system("pause");
			return 0;
		}
	}
	else if (userAnswer == "No" || userAnswer == "no")
	{
		cout << "Okay bye then..." << endl;
		system("pause");
		return 0;
	}

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
		cout << "('q' to quit): ";
		cin >> userBrand1;
		cout << endl;

		// Dodge
		if (userBrand1 == "Dodge")
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
				cout << "Enter the [model name] you want to buy: ";
				cin >> userModel;
				if (userModel == "Challenger")
				{
					cout << "\n-------------";
					cout << "\nYear" << endl;
					for (int i = 0; i < 3; ++i)
					{
						cout << "[" << i + 1 << "] " << carYear.at(i) << endl;
					}
					cout << "-------------" << endl;
					cout << "Enter the [number] for the model year you want to buy: ";
					cin >> userYear;
					if (userYear == 1)
					{
						cout << "\nThe price range for these years are: $13,000 - $20,000." << endl;
						cout << "Would you like to buy " << carYear.at(userYear - 1) << " " << userBrand1 << "?" << endl;
						cout << "[1] Yes" << " [2] No : ";
						cin >> userChoice;
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
							cout << "Would you like to buy " << carYear.at(userYear - 1) << " " << userBrand1 << "?" << endl;
							cout << "[1] Yes" << " [2] No : ";
							cin >> userChoice;
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
							cout << "\n[You cant afford this model year of the " << userBrand1 << " " << userModel << ".]" << endl;
						}
					}
					else if (userYear == 3)
					{
						if (userPriceRange >= 35000)
						{
							cout << "Would you like to buy " << carYear.at(userYear - 1) << " " << userBrand1 << "?" << endl;
							cout << "[1] Yes" << " [2] No : ";
							cin >> userChoice;
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
							cout << "\n[You cant afford this model year of the " << userBrand1 << " " << userModel << ".]" << endl;
						}
					}
				}
			}
		}
	} while (userBrand1 != "q");

	
	if (userChoice == 1) 
	{
		Car Buy;
		Buy.setCarBrand(buyBrand);
		Buy.setCarModel(buyModel);
		Buy.setCarYear(buyYear);
		Buy.setCarprice(buyPrice);

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
		cout << "You decided not to buy. =(" << endl;
	}
	

	system("pause");
	return 0;
}
