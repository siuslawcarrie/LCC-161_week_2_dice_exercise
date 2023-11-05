/*  Practice problem 1 */

#include <iostream>
using namespace std;

int main()
{
    // declare all the variables you think you'll need
    // price, change, quarters, dimes, nickels and pennies
    // what's an appropriate data type for each?
    int price, change, quarters, dimes, nickels, pennies;

    // display instructions to the user
    cout << "Please enter a price (less than 1 dollar or 100 cents).  I will calculate the change for you." << endl;

    // prompt the user to enter the price
    cout << "Price: " << endl;
    // write a statement that gets the price from the user and stores it in price
    cin >> price;
    // move the cursor to the next line for readability
    cout << endl;

    // Write a statement that assigns to change the difference between 100 and price
    change = 100 - price;

    // display the change
    cout << "Your total change is " << change << endl;

    // Write a statement assigns to quarters the change / 25
    quarters = change / 25;

    // Write a statement that assigns a new value to change based on the number of quarters * 25
    // you could also use the modulus operator or %
    change = change % 25;

    // Write a statement that assigns to dimes the change / 10
    dimes = change / 10;

    // Write a statement that assigns a new value to change based on the number of dimes * 10
    change = change % 10;

    // repeat for nickels
    nickels = change / 5;
    change = change % 5;

    // pennies are a little easier
    pennies = change;

    // Write a statement that displays an appropriate message to the user as well as
    // the value in the variables quarters, dimes, nickels and pennies
    cout << "Quarters " << quarters << endl;
    cout << "Dimes " << dimes << endl;
    cout << "Nickels " << nickels << endl;
    cout << "Pennies " << pennies << endl;
}

/* Practice Problem 2 */

#include <iostream>
using namespace std;

int main()
{

    string romanNumeral;
    int decimalValue;

    cout << "Enter a roman numeral between I and V and I'll display it's decimal value" << endl;

    cout <<"Roman Numeral: ";
    cin >> romanNumeral;

    if (romanNumeral == "I")
        decimalValue = 1;
    else if (romanNumeral == "II")
        decimalValue = 2;
    else if (romanNumeral == "III")
        decimalValue = 3;
    else if (romanNumeral == "IV")
        decimalValue = 4;
    else if (romanNumeral == "V")
        decimalValue = 5;
    else
        decimalValue = 0;

    if (decimalValue == 0)
        cout << "Invalid data entry!" << endl;
    else
        cout << "Decimal value: " << decimalValue << endl;

}

/* Practice Problem 3 */
#include <iostream>

using namespace std;

// This program checks to see if a number is positive, negative or zero
// The input must be between -99 and 99, inclusive
int main()
{
    const int MAX = 99;
    const int MIN = -99;
    int value;

    do
    {
        cout << "Enter an integer between -99 and 99, inclusive. " << endl;
        cin >> value;

        if ( value < MIN or value > MAX )
        {
            cout << "Bad Input Data" << endl;
        }
        else
        if ( value < 0 )
        {
            cout << value << " is a negative number." << endl;
        }
        else
        if ( value > 0 )
        {
            cout << value << " is a positive number." << endl;
        }
        else
            cout << "Your number was zero" << endl;

    } while ( value != -1 );

    return 0;
}
