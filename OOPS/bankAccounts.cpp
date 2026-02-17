#include <iostream>
using namespace std;
class bankAccount{
private:
    int accountNumber;
    string accountName;
    double accountBalance;

public:
    bankAccount(int number , string name , double balance) 
    {
        this->accountName = name;
        this->accountBalance = balance;
        this->accountNumber = number;
    }

    void Deposite(double amount)
    {
        if(amount <= 0 )
        {
            cout << "Amount must be greater than zero.\n";
            return;
        }
        this->accountBalance += amount;
        cout << "Your Current Amount: " << this->accountBalance << endl;
    }

    void withdrawl(double amount)
    {
        if(this->accountBalance <= 0 || this->accountBalance < amount)
        {
            cout << "Insufficient Funds.\n";
        }
        else 
        {
            this->accountBalance -= amount ;
            cout << "Your Current Amount: " << this->accountBalance << endl; 
        }
    }

    void displayAccountInfo()
    {
        cout << "Account Number: " <<this->accountNumber <<endl << "Account Name: " << this->accountName << endl << "Account Balance: " << this->accountBalance << endl;
    }
    
    int getBalance()
    {
        return this->accountBalance;
    }

};
int main()
{
    int choice , amount;

    bankAccount b1(74708,"Hasnain Raza" , 10000);
    do
    {
        cout << "1. Deposit\n2. Withdraw\n3. Show Account\n4. Exit" <<endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter Deposite amount: ";
        cin >> amount;
        b1.Deposite(amount);
        break;
    case 2:
        cout <<"Enter Withdrawl amount: ";
        cin >> amount;
        b1.withdrawl(amount);
        break;
    case 3:
        b1.displayAccountInfo();
        break;
    case 4:
        cout << "Exiting.....";
        return 0;
    default:
        break;
    }

    } while (choice != 4);

}