#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Account class
class Account {
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
				transactionHistory.push_back("Withdrew: $" + to_string(amount));
				cout << "Withdrawal successful! New balance: $" << balance << endl;
			} else if (amount > balance) {
				cout << "Insufficient funds!" << endl;
			} else {
				cout << "Invalid amount for withdrawal!" << endl;
			}
		}

		void viewTransactionHistory() {
			cout << "Transaction History:" << endl;
			for (const auto &transaction : transctionHistory) {
				cout << transaction << endl;
			}
		}
};

//ATM class
class ATM {
	private:
		vector<Account> accounts;
		Account* currentAccount;
		
	public:
		ATM() {
			currentAccount = nullptr;
		}
		
		void addAccount(string holder, string pin, double initialBalance) {
			accounts.emplace_back(holder, pin, initialBalance);
		}
		
		bool login(string holders, string pin) {
			for (auto &account :) {
				if (account.verifyPin(Pin)) {
					currentAccount = &account;
					cout << "Welcome, " << holder << "!" << endl;
					return true;
				}
			}
			cout << "Invalid credentials! "
		}
};
