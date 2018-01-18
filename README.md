# Pima CC CIS178 Week #2 4.14 Exercise

Title: Credit Limits

Develop a C++ program that will determine whether a department - store customer has exceeded the credit limit on a charge account. For each customer, the following facts are available:
* Account number (an integer)
* Balance at the beginning of the month
* Total of all items charged by this customer this month
* Total of all credits applied to this customer’s account this month
* Allowed credit limit
The program should use a while statement to input each of these facts, calculate the new balance (= beginning balance + charges – credits) and determine whether the new balance exceeds the customer’s credit limit. For those customers whose credit limit is exceeded, the program should display the customer’s account number, credit limit, new balance and the message "Credit Limit Exceeded."
```text
   Enter account number (or -1 to quit): 100
   Enter beginning balance: 5394.78
   Enter total charges: 1000.00
   Enter total credits: 500.00
   Enter credit limit: 5500.00
   New balance is 5894.78
   Account: 100
   Credit limit: 5500.00
   Balance: 5894.78
   Credit Limit Exceeded.

   Enter account number (or -1 to quit): 200
   Enter beginning balance: 1000.00
   Enter total charges: 123.45
   Enter total credits: 321.00
   Enter credit limit: 1500.00
   New balance is 802.45

   Enter account number(or -1 to quit): -1
```
Notes:
* It is acknowledged that the use of type double for monitary values is generally considered a bad choice.
* Compiled with MS Visual Studio 2017 Community (v141).
* Submitted in partial fulfillment of the requirements of PCC CIS-278.
