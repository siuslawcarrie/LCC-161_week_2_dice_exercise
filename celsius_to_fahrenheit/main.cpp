#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

/*
Celsius to Fahrenheit
 //PROGRAM
 /Steps
 Greeting
 Ask for name
 Welcome
 Ask user if they'd like to convert a celsius temperature or a fahrenheit temperature
 //IF STATEMENT
 If celsius, do celsius to fahrenheit math
 If fahrenheit, do fahrenheit to celsius math
 END IF STATEMENT
 //Display

 //END Steps

 //Variables
 celsius = c_value
 fahrenheit = f_value


 --VARIABLES
 TYPE string
 employee name: emp_name

 TYPE integer
 employee ID: emp_id

 --Pay
 TYPE float? 2 decimals
 monthly salary: gross_pay
net income: net_income

 * --Deductions
 * TYPE float %
 * retirement: retire_ded
 * federal tax: fed_tax
 * state tax: state_tax
 * Medicare tax: medicare_tax
 * social security: soc_sec_tax
 * total taxes: sum_taxes
 * take home pay %: take_home_percent
 *  *
 * TYPE float? flat amount 2 decimals
 * health insurance: health_ins
 * life insurance: life_ins
 * total deductions: total_deductions
 *
 * --END VARIABLES
 *  *
 * --MATH
 * 1. Calculate retirement amount from gross pay
 * 2 *Calculate federal tax from gross pay
 * 5. Calculate state tax from gross pay
 * 6. Calculate Medicare tax from gross pay
 * 7. Calculate social security tax from gross pay
 * 8. Sum all taxes = total taxes
 * 10. Add all taxes, health insurance and life insurance = total deductions
 * 11. Deduct total deductions from gross pay = net pay
 * 12. Divide net pay by gross pay = take home pay %
 * --END MATH
 *
 * --DISPLAY
*/

int main() {
//Variables
    string name; //user's name
    int emp_id; //user's employee ID
//taxes
    float gross_pay, fed_tax, state_tax, medicare_tax, soc_sec_tax, sum_taxes,
            take_home_percent;
//flat amount deductions
    float retire_ded, life_ins;
    cout << "What is your name? "; //ask for username
    cin >> name;
    cout << "Hello " << name << "!" << endl; //greeting

    cout << "Please enter your employee ID number. " << name << "'s employee ID:"; //ask for user employee ID
    cin >> emp_id;
    while ((!(cin >> emp_id)) || (emp_id > 9999)) {
        // Explain error not entering an integer
        cout << "I'm sorry that's not a valid entry. Please enter a number between 0 and 999 ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(123, '\n');
        cin >> emp_id;

        //cin>>emp_id;
    }
}