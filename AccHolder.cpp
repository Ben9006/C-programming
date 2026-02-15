#include <iostream>
#include <string.h>
using namespace std;

class AccountHolder{
	protected: 
		string name;
	public: 
		void setName(string n){
			name = n;
		}
		string getName(){
			return name;
		}	
};

class BankAccount: public AccountHolder {
	private:
		int accountNumber;
		double balance;	
		
	public:	
	BankAccount(int number, double bal, string n){
		setName(n);
		accountNumber = number;
		balance = bal;
	}	 
	int getAccountNumber(){
		return accountNumber;
	}
	double getBalance(){
		return balance;
	}
};

class SavingsAccount: public BankAccount {
	private:
		double interestRate;
	public:
		SavingsAccount(string n, int number, double bal, double rate)
        :BankAccount(number, bal, n)
        {
		 	interestRate = rate;
        }
        
		double getInterestRate(){
			return interestRate;
		} 	
};

int main(){
	SavingsAccount s("Benedict", 01000, 10000.00, 5);
	
	cout << "Name: " << s.getName() << endl;
	cout << "Account Number: " << s.getAccountNumber() << endl;
	cout << "Balance: $" << s.getBalance() << endl;
	cout << "Interest Rate: " << s.getInterestRate() << endl;
	return 0;
}




 