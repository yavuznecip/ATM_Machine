#include <iostream>
using namespace std;

void showMenu() {

	cout << "**********MENU**********" << endl;
	cout << "1. Check Balance" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw" << endl;
	cout << "4. Transfer" << endl;
	cout << "5. Exit" << endl;
	cout << "************************" << endl;
}


int main()
{
	int opt;
	double balance1 = 1000;
	double balance2 = 500;
	double depositAmount, withdrawAmount;

	do {
		showMenu();
		cin >> opt;
		system("cls");
		switch (opt) {
		case 1: cout << "Choose Account: \n1. Account1\n2. Account2" << endl;
			int optAcc;
			cin >> optAcc;
			if (optAcc == 1)
				cout << "Balance: " << balance1 << endl;
			else if (optAcc == 2)
				cout << "Balance: " << balance2 << endl;
			else
				cout << "Invalid account" << endl;
			break;

		case 2: cout << "Choose Account: \n1. Account1\n2. Account2" << endl;
			cin >> optAcc;
			if (optAcc == 1) {
				cout << "Deposit Amount: " << endl;
				cin >> depositAmount;
				balance1 += depositAmount;
			}
			else if (optAcc == 2) {
				cout << "Deposit Amount: " << endl;
				cin >> depositAmount;
				balance2 += depositAmount;
			}
			else
				cout << "Invalid account" << endl;
			break;

		case 3: cout << "Choose Account: \n1. Account1\n2. Account2" << endl;
			cin >> optAcc;
			if (optAcc == 1) {
				cout << "Withdraw Amount: " << endl;
				cin >> withdrawAmount;
				if (withdrawAmount <= balance1)
					balance1 -= withdrawAmount;
				else
					cout << "Not enough credits." << endl;
			}
			else if (optAcc == 2) {
				cout << "Withdraw Amount: " << endl;
				cin >> withdrawAmount;
				if (withdrawAmount <= balance2)
					balance2 -= withdrawAmount;
				else
					cout << "Not enough credits." << endl;
			}
			else
				cout << "Invalid Account" << endl;
			break;

		case 4: cout << "Choose the account that the money will be taken: \n1. Account1\n2. Account2" << endl;
			double transferAmount;
			cin >> optAcc;
			if (optAcc == 1) {
				cout << "Transfer Amount: " << endl;
				cin >> transferAmount;
				if (transferAmount <= balance1) {
					balance1 -= transferAmount;
					balance2 += transferAmount;
				}
				else
					cout << "Not enough credits." << endl;
			}
			else if (optAcc == 2) {
				cout << "Transfer Amount: " << endl;
				cin >> transferAmount;
				if (transferAmount <= balance2) {
					balance2 -= transferAmount;
					balance1 += transferAmount;
				}
				else
					cout << "Not enough credits." << endl;
			}
			else
				cout << "Invalid Account" << endl;
		}

	} while (opt != 5);
}

