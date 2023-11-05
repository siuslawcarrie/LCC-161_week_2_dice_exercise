/*
Carrie Bailey
CS221 Fall 2023
Due: October 8, 2023
Week 2, Program #6: Temperature Conversion
This program asks the user for the temperature in celsius or fahreinheit then converts it
  */
#include <iostream>
#include <iomanip>


using namespace std;

//variables
float fahrenheit_calc;
float celsius_calc;
float tempF;
float tempC;
char which_scale;
char temp_entry;
string user_name;
//end variables

int main() {
    //ask for choice of entry temperatures
    //cout << "This is a temperature calculator!" << endl;
    //cout << "Press enter to start.";
    //cin.ignore();
    cout << "Would you like to enter the temperature in Fahrenheit or Celsius? Enter 'F' for "
            "Fahrenheit or 'C' for Celsius." << endl;
    cin >> which_scale;
    if ((which_scale == 'f') or (which_scale == 'F')) {
        cout << "Enter degrees Fahrenheit: " << endl;
        cin >> tempF;
        celsius_calc = (tempF - 32.00) * 5.00 / 9.00;
        cout << tempF << " Fahrenheit is " << setprecision(3) <<celsius_calc << " degrees Celsius.";
    }
    if ((which_scale == 'c') or (which_scale == 'C'))
    {
        cout << "Enter degrees Celsius: " << endl;
        cin >> tempC;
        fahrenheit_calc = tempC * 9.0 / 5.0 + 32.0;
        cout << tempC << " Celsius is " << setprecision(3)<<fahrenheit_calc << " degrees Fahrenheit.";
    }

    return 0;

}
