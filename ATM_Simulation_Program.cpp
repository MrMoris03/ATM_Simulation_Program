#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Account class
class Account{
	private:
		string accountHolder;
		string pin;
		double balance;
		vector<string> transactionHistory;
};
