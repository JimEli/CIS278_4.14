/*************************************************************************
* Title: Credit Limits
* File: CIS278_Week2_4.14.cpp
* Author: James Eli
* Date: 1/18/2018
*
* Develop a C++ program that will determine whether a department - store 
* customer has exceeded the credit limit on a charge account. For each 
* customer, the following facts are available:
*   a) Account number (an integer)
*   b) Balance at the beginning of the month
*   c) Total of all items charged by this customer this month
*   d) Total of all credits applied to this customer’s account this month
*   e) Allowed credit limit
* The program should use a while statement to input each of these facts, 
* calculate the new balance (= beginning balance + charges – credits) and 
* determine whether the new balance exceeds the customer’s credit limit. 
* For those customers whose credit limit is exceeded, the program should 
* display the customer’s account number, credit limit, new balance and the 
* message "Credit Limit Exceeded."
*   Enter account number (or -1 to quit): 100
*   Enter beginning balance: 5394.78
*   Enter total charges: 1000.00
*   Enter total credits: 500.00
*   Enter credit limit: 5500.00
*   New balance is 5894.78
*   Account: 100
*   Credit limit: 5500.00
*   Balance: 5894.78
*   Credit Limit Exceeded.
*
*   Enter account number (or -1 to quit): 200
*   Enter beginning balance: 1000.00
*   Enter total charges: 123.45
*   Enter total credits: 321.00
*   Enter credit limit: 1500.00
*   New balance is 802.45
*
*   Enter account number(or -1 to quit): -1
*
* Notes:
* (1) It is acknowledged that the use of type double for monitary values 
*     is generally considered a bad choice.
* (2) Compiled with MS Visual Studio 2017 Community (v141).
*
* Submitted in partial fulfillment of the requirements of PCC CIS-278.
*************************************************************************
* Change Log:
*   01/18/2018: Initial release. JME
*************************************************************************/
#include <iostream>  // cin/cout/endl
#include <iomanip>   // fixed/setprecision
#include <climits>   // int_max
#include "input.cpp" // Numeric input routines

using namespace std;

// Maximum input values.
const int MAX_ACCOUNT_NUMBER = { INT_MAX };
const double MAX_BALANCE = { 100000. };
const double MAX_CHARGES = { 100000. };
const double MAX_CREDITS = { 100000. };
const double MAX_CREDIT_LIMIT = { 100000. };

int main() {
	int accountNumber;   // Customer account number.
	double balance;      // Customer monthly balance.
	double totalCharges; // Customer total monthly charges.
	double totalCredits; // Customer total monthly credits.
	double creditLimit;  // Customr credit limit.

	// Loop until user quits (entering -1 for balance), or fails input attempt.
	while (true) {
		// Get all user input.
		if (!getNumber<int>("Enter account number (or -1 to quit): ", accountNumber, -1, MAX_ACCOUNT_NUMBER))
			break;
		// Check for exit.
		else if (accountNumber == -1)
			break;
		if (!getNumber<double>("Enter beginning balance: ", balance, 0., MAX_BALANCE))
			break;
		if (!getNumber<double>("Enter total charges: ", totalCharges, 0., MAX_CHARGES))
			break;
		if (!getNumber<double>("Enter total credits: ", totalCredits, 0., MAX_CREDITS))
			break;
		if (!getNumber<double>("Enter credit limit: ", creditLimit, 0., MAX_CREDIT_LIMIT))
			break;

		// Calculate new balance and display.
		balance = balance + totalCharges - totalCredits;
		cout << "New balance is " << fixed << setprecision(2) << balance << endl;

		// Check if customer has exceeded credit limit and report it.
		if (balance > creditLimit) {
			cout << "Account: " << setw(5) << setfill('0') << accountNumber << endl;
			cout << "Credit limit: " << creditLimit << endl;
			cout << "Balance: " << balance << endl;
			cout << "Credit Limit Exceeded.\n";
		}
		cout << endl; // Screen formatting.
	}

	return 0;
}