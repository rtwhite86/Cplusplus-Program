#include "GroceryTracker.h"
#include <fstream> 
#include <iostream>

// Default constructor for the GroceryTracker class.
GroceryTracker::GroceryTracker()
{
}

// Reads the input file and counts the frequency of each grocery item.
void GroceryTracker::LoadData(const string& fileName)
{
	ifstream inputFile(fileName);

	// Verify the input file opened successfully.
	if (!inputFile.is_open())
	{
		cout << "Error: Unable to open input file." << endl;
		return;
	}
	
	string item;

	// Read each grocery item and increase its frequency count.
	while (inputFile >> item)
	{
		itemFrequency[item]++;
	}

}

// Returns the frequency of the requested grocery item.
int GroceryTracker::GetItemFrequency(const string& item) const
{
	auto it = itemFrequency.find(item);

	// Return the frequency if the item exists.
	if (it != itemFrequency.end())
	{
		return it->second;
	}

	// Return zero if the item was not found.
	return 0;
}

// Displays the grocery item and its numeric frequency.
void GroceryTracker::PrintAllFrequencies() const
{
	for (const auto& pair : itemFrequency)
	{
		cout << pair.first << " " << pair.second << endl;
	}
}

// Displays each grocery item with a text-based histogram.
void GroceryTracker::PrintHistogram() const
{
	for (const auto& pair : itemFrequency)
	{
		cout << pair.first << " ";

		// Print one asterisk for each purchase of the item.
		for (int i = 0; i < pair.second; ++i)
		{
			cout << "*";
		}

		cout << endl;
	}
}

// Creates the backup data file containing item frequencies.
void GroceryTracker::CreateBackupFile(const string& fileName) const
{
	ofstream outputFile(fileName);

	// Verify the backup file was created successfully.
	if (!outputFile.is_open())
	{
		cout << "Error: Unable to create backup file." << endl;
		return;
	}

	// Write each grocery item and its frequency to the backup file.
	for (const auto& pair : itemFrequency)
	{
		outputFile << pair.first << " " << pair.second << endl;
	}
}


