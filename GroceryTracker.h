#ifndef GROCERYTRACKER_H
#define GROCERYTRACKER_H

#include <map>
#include <string>

using namespace std;

// Class responsible for reading grocery purchase data,
// storing item frequencies, and displaying reports.
class GroceryTracker {
public:
	// Constructor
	GroceryTracker();

	// Reads the grocery input file and counts item frequencies.
	void LoadData(const string& fileName);

	// Creates the backup file containing item frequencies.
	void CreateBackupFile(const string& fileName) const;

	// Returns the frequency of a specific grocery item.
	int GetItemFrequency(const string& item) const;

	// Displays all grocery items and their frequencies.
	void PrintAllFrequencies() const;

	// Displays a histogram of grocery item frequencies.
	void PrintHistogram() const;

private:
	// Stores each grocery item and the number of times it appears. 
	map<string, int> itemFrequency;
};

#endif
