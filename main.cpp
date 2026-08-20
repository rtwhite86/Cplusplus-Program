#include <iostream>
#include <string>
#include "GroceryTracker.h"

using namespace std;

int main()
{	
	// Create a GroceryTracker object to manage grocery item data.
	GroceryTracker tracker;

	// Load the grocery purchase data and create the backup frequency file.
	tracker.LoadData("CS210_Project_Three_Input_File.txt");
	tracker.CreateBackupFile("frequency.dat");

	int menuChoice = 0;

	// Continue displaying the menu until the user chooses option 4.
	while (menuChoice != 4)
	{
		cout << endl;
		cout << "Corner Grocer Item Tracking Program" << endl;
		cout << "1. Search for an item" << endl;
		cout << "2. Display all item frequencies" << endl;
		cout << "3. Display item frequency histogram" << endl;
		cout << "4. Exit" << endl;
		cout << "Enter your selection: ";

		if (!(cin >> menuChoice))
		{
			cin.clear();
			cin.ignore(10000, '\n');

			cout << "Invalid input. Please enter a number from 1 to 4." << endl;
			continue;
		}

		// Menu option 1: Search for and display the frequency of one item.
		if (menuChoice == 1)
		{
			string item;

			cout << "Enter grocery item: ";
			cin >> item;

			cout << item << " was purchased "
				<< tracker.GetItemFrequency(item)
				<< " times." << endl;
		}
		// Menu option 2: Display all grocery items and numeric frequencies.
		else if (menuChoice == 2)
		{
			cout << endl;
			tracker.PrintAllFrequencies();
		}
		// Menu option 3: Display a histogram of all grocery item frequencies.
		else if (menuChoice == 3)
		{
			cout << endl;
			tracker.PrintHistogram();
		}
		else if (menuChoice != 4)
		{
			cout << "Invalid selection. Please enter a number from 1 to 4." << endl;
		}

		}

	return 0;
}
