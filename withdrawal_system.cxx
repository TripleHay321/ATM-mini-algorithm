#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string choice;
    int bal = 8500;
    int new_bal;
    cout << "What Transaction do you want to perform \nDeposit\nWithdrawal \nRecharge \nBalance \nExit" << endl;
    cout << "Enter Transaction to perform:    ";
    cin >> choice;
    transform(choice.begin(), choice.end(), choice.begin(), ::toupper);
    cout << choice << endl;
    if (choice == "DEPOSIT")
    {
        int deposit;
        cout << "Enter amount you want to deposit:    ";
        cin >> deposit;
        new_bal = bal + deposit;
        cout << "New balance is " << new_bal << endl;
    }
    else if (choice == "WITHDRAWAL") {
        int withdrawal;
        cout << "Enter amount to withdraw:";
        cin >> withdrawal;
        if (withdrawal > bal) {
            cout << "Insufficient Funds" << endl;
        }
        else {
            new_bal = bal - withdrawal;
            cout << "You made a withdrawal of " << withdrawal << " New balance is " << new_bal << endl;
        }
    }
    else if (choice == "RECHARGE") {
        string number;
        int recharge;
        cout << "Enter number to recharge for:  ";
        cin >> number;
        cout << "Enter amount you want to recharge: ";
        cin >> recharge;
        if (recharge > bal) {
            cout << "Insufficient Balance" << endl;
        }
        else {
            new_bal = bal - recharge;
            cout << "You recharged " << number << " " << recharge << " worth of airtime" << " New Balance is " << new_bal << endl;
        }
    }
    else if (choice == "BALANCE") {
        cout << "New Balance is" << bal << endl;
    }
    else if (choice == "EXIT") {
        cout << "" << endl;
    }
    else {
        cout << "Operation does not exist" << endl;
    }
return 0;
}
