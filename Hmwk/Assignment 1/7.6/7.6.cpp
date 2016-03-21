#include<iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

const int NUM_MONTHS = 3;
const int DAYS_IN_MONTH = 30;
const string name[NUM_MONTHS] = { "June", "July", "August" };

// Function prototype
void readFileData(char[][DAYS_IN_MONTH]);

int main()
{
	char dayType[NUM_MONTHS][DAYS_IN_MONTH];
	int rainy,                  // Counts number of days of each type
            cloudy,                 // during one particular month
            sunny,
            rainyTotal = 0,         // Counts number of days of each type
            cloudyTotal = 0,        // during 3-month period
            sunnyTotal = 0,
            wettestMonth,           // Index of rainiest month
            wettestMonthsRain = -1; // Number of rainy days in rainiest month

	// Call function to read in the weather data and store it in the array
	readFileData(dayType);

	// Print report heading
	cout << "    Summer Weather Report\n"
             << "Month    Rainy  Cloudy  Sunny\n"
             << "_____________________________\n";

	// Accumulate and display weather statistics 
	for (int month = 0; month < NUM_MONTHS; month++){
            // Reset accumulators
            rainy = cloudy = sunny = 0;

            // Accumulate weather statistics for current month 
            for (int day = 0; day < DAYS_IN_MONTH; day++){
                if (dayType[month][day] == 'R')
                    rainy++;
                else if (dayType[month][day] == 'C')
                    cloudy++;
                else
                    sunny++;
            }
            
            // Add monthly totals to grand totals
            rainyTotal += rainy;
            cloudyTotal += cloudy;
            sunnyTotal += sunny;

            // Determine if this month is the rainiest so far
            if (rainy > wettestMonthsRain){
                wettestMonthsRain = rainy;
                wettestMonth = month;
            }
            
            // Display this month's results 
            cout << left << setw(6) << name[month]
                 << right << setw(6) << rainy 
                 << setw(8) << cloudy
                 << setw(7) << sunny << endl;
	}
	// Display summary data
	cout << "_____________________________\n";
	cout << "Totals" << setw(6) << rainyTotal 
                << setw(8) << cloudyTotal 
                << setw(7) << sunnyTotal << endl << endl;
	cout << "The month with the most rainy days was "
		<< name[wettestMonth] << ".\n";

	
	return 0;
}

//This function is use to read File Data
void readFileData(char dayType[][DAYS_IN_MONTH])
{
	ifstream weatherData;

	//Open data file
	weatherData.open("RainOrShine.txt");
	if (!weatherData){
            cout << "Error opening data file.\n";	
	}

	// Else, if file was opened correctly, read weather data into the array
	for (int month = 0; month < NUM_MONTHS; month++)
	{
            for (int day = 0; day < DAYS_IN_MONTH; day++)
                weatherData >> dayType[month][day];
	}
	// Close the data file
	weatherData.close();
}
