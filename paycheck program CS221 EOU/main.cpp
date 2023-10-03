#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

/*
 Paycheck Program:
 --USER INPUT
 1.Ask for employee ID - 4 digits
 2. Ask for employee name
 3. Ask for employee monthly salary - display employee name
 --END USER INPUT


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
 * TYPE float? %
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

    string name;
    int emp_id;
    cout << "What is your name? "; //ask for user name
    cin >> name;
    cout << "Hello " << name << "!" << endl; //greeting
    return 0;
}