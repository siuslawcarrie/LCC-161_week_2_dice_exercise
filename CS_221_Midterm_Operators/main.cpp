
/*Write the C++ code to do the following (see the code to get you started at the bottom):

Ask the user for a number, N, between 1 and 10
Show the user a list of operations to perform:
2*N
        N^2 (N2)
2^N (2N)
Ask the user to choose an operation 1-3
Show the result of the calculation
Requirements

        Validate the number they enter. If it's not between 1 and 10 (inclusive), print a message and exit the program
Validate their operation choice. If it's not one of the choices, print an error message and exit the program.
You must use the switch operator in your solution to receive full credit
 */
#include <iostream>
#include <unistd.h>
#include <stdlib.h>

using namespace std;

void userWelcome();//greeting

int validation_integer(int min, int max);//validation

int num_1();//user number

int choice();//user's math choice

int exponent(int N);//loop to calculate exponent


int main() {
    int N;//user number
    int userChoice;//user's math choice
    int result; // variables for calculation results
    userWelcome();//greeting
    N = num_1();//assign N to user's validated number
    userChoice = choice();//assign variable to user's validated choice

    //performCalculation;
    switch (userChoice) {
        case 1:
            result = 2 * N;
            break;
        case 2:
            result = N * N;
            break;
            /* case 3 - there must be a way to do a loop, maybe a for loop for this, but I can't
            figure it out. This works, but obviously is not scaleable. */
        case 3:
            if (N == 0) {
                result = 1;
            }
            else if (N == 1) {
                result = 2;
            }
            else//exponsent calculator
            {
                int base = 2;
                for (int i = 2; i <= N; ++i) {
                    base *= 2;
                }
                result = base;
            }


    }

    cout << "The result of your calculation is: " << result << ". Thank you for playing!";


    return 0;
}


int num_1() {
    cout << "Please enter your number N: ";
    int min = 1, max = 10;
    return validation_integer(min, max);
}

int choice() //get user's choice//
{
    cout << "Please enter your choice as a number 1 -3: " << endl;
    cout << "1. 2 * N" << endl << "2. N^2" << endl << "3. 2^N" << endl;
    int min = 1, max = 3;
    return validation_integer(min, max);


}


int validation_integer(int min, int max) //function to validate integers
{
    int number;
    cin >> number;
    while (!cin or (number < min) or (number > max)) {
// Explain error not entering an integer and exit program
        cout << "I'm sorry that's not a valid entry. Goodbye!";
        exit(EXIT_FAILURE);
    }
    return number;
}

void userWelcome() //greeting
{
    string user_name;
    cout << "Welcome to Carrie's Number Calculator! What is your name? ";
    cin >> user_name;
    cout << "Hi " << user_name << "!" << endl;
    cout << "I'm going to ask you for a number between 1 and 10 and a "
            "choice of three mathematical operations. Then I will perform "
            "the appropriate calculation.";
    sleep(2);
    cout << "So, let's play!" << endl;


}
