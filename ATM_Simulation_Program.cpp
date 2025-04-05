#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Account class
class Account{
	private:
		string accountHolder;	//Person with access to current account
		string pin;	//Pin to authorize account access
		double balance;	//Amount available in account
		vector<string> transactionHistory;	//Vector to store account transactions history
		
	public:
		Account(string holder, string accountPin, double initialBalance) {
			accountHolder = holder;
			pin = accountPin;
			balance = initialBalance;
		}
		
		bool verifyPin(string enteredPin) {
			return pin == enteredPin;
		}
		
		double checkBalance() {
			return balance;
		}
		
		void deposit(double amount) {
			if (amount > 0) {
				balance = balance + amount;
				transactionHistory.push_back("Deposited: $" + to_string(amount));
				cout << "Deposit successful! New balance: $" << balance << endl;
			} else {
				cout << "Invalid amount for deposit!" << endl;
			}
		}
		
		void withdraw(double amount) {
			if (amount > 0 && amount <= balance) {
				balance = balance - amount;
				transactionHistory.push_back
			}
		}
};
