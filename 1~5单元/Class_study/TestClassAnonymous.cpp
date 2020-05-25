/*匿名对象类使用*/
#include<iostream>

using std::cout;
using std::endl;

class Account {
	double balance;
public:
	Account() {
		balance = 0.0;
	}
	Account(double balance_) {
		balance = balance_;
	}
	//存钱
	void deposit(double amount) {
		balance += amount;
	}
	double withdraw(double amount) {
		double temp{ 0.0 };
		if (balance < amount) {
			balance = 0;
			return (temp);
		}
		else {
			balance -= amount;
			return (amount);
		}
	}
};

int main_匿名函数() {
	Account a1;
	Account a2 = Account(100.0);

	a1.deposit(9.0);
	cout << a1.withdraw(10) << endl;
	cout << a2.withdraw(52.0) << endl;

	cout << Account(1000.0).withdraw(1001.0) << endl;
	return 0;
}