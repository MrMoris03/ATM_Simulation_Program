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
			cout << "Invalid credentials! Please try again."; << endl;
			return false;
		}
		
		void logout () {
			currentAccount = nullptr;
			cout << "Logged out successfully!" << endl;
		}
		
		void run() {
			if (currentAccount == nullptr) {
				cout << "No user logged in!" << endl;
				return;
			}
			
			int choice;
			do{
				cout << "\nATM Menu:\n";
				cout << "1. Check Balance\n";
				cout << "2. Deposit Money\n";
				cout << "3. Withdraw Money\n";
				cout << "4. View Transaction History\n";
				cout << "5. Logout\n";
				cout <<	"Enter your choice: ";
				cin >> choice;
				
				switch (choice) {
					case 1:
						cout << "Current Balance: $" << currentAccount -> checkBalance() << endl;
						break;
					case 2: {
						double depositAmount;
						cout << "Enter amount to deposit: ";
						cin >> depositAmount;
						currentAccount->deposit(depositAmount);
						break;
					}
					case 3: {
						double withdrawalAmount;
						cout << "Enter amount to wit"
						break;
					}	
				}
			}
		}
};
