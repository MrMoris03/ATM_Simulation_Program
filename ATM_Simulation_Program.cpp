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
};
