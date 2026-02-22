#include <iostream>
#include <vector>
using namespace std;
class BankAccount{
protected:
    int accountNumber;
    string name;
    double balance;
public:
    BankAccount(int num , string n , double b) 
    :accountNumber(num) , name(n) , balance(b){}

    void deposit(double amount)
    {
        balance += amount;
        cout << "Depsite Success......\n";
        cout << "Balance: " << balance <<endl;
    }

    virtual void withdraw(double amount)
    {
        if(amount > balance)
        {
            cout << "Insufficent Balance.\n";
        }
        else
        {
            balance -= amount;
            cout << "Withdrawl Success.....\n";
            cout << "Balance: " << balance <<endl;
        }
    }

    virtual void calculateMonthlyUpdate() = 0;

    virtual void displayAccount()
    {
        cout << "Account Number: "<< accountNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }

    int getNumber()
    {
        return accountNumber;
    }
    virtual ~BankAccount(){}
};

class SavingsAccount: public BankAccount{
private: 
    double interestRate;
public:
    SavingsAccount(int num , string n , double b, double interest)
    :BankAccount(num,n,b),interestRate(interest){}
    
    void calculateMonthlyUpdate() override
    {
        balance += balance * interestRate;
        cout << "Interest Added New Balance: " << balance <<endl;
    }

    void displayAccount() override
    {
        cout<<"-----------------------"<<endl;
        cout<< "Saving Account" <<endl;
        BankAccount::displayAccount();
        cout<<"-----------------------"<<endl;
    }

};

class CurrentAccount : public BankAccount{
private:
    double overdraftLimit;
public:
    CurrentAccount(int num , string n , double b , double over)
    :BankAccount(num,n,b),overdraftLimit(over){}

    void withdraw(double amount) override
    {
    if(amount > balance + overdraftLimit)
    {
        cout << "Cannot withdraw. Overdraft limit exceeded.\n";
    }
    else
    {
        balance -= amount;
        cout << "Withdrawal Success.....\n";
        cout << "Balance: " << balance <<endl;
    }

    }
    void calculateMonthlyUpdate() override {
        cout << "Current account - no monthly interest.\n";
    }
    void displayAccount() override
    {
        cout<<"-----------------------"<<endl;
        cout<< "Current Account" <<endl;
        BankAccount::displayAccount();
        cout<<"-----------------------"<<endl;
    } 
};

class Bank{
private:
    vector<BankAccount*> accounts;
public:
    void addAccount(BankAccount* b)
    {
        accounts.push_back(b);
    }

    void removeAccount(int accountNumber)
    {
        for(int i = 0 ; i < accounts.size(); i++)
        {
            if(accounts[i]->getNumber() == accountNumber)
            {
                delete accounts[i];
                accounts.erase(accounts.begin() + i);
            }
        }
    }

    void processMonthlyUpdate()
    {
        for (int i = 0; i < accounts.size() ; i++)
        {
            accounts[i]->calculateMonthlyUpdate();
        }
    }

    void displayAllAccounts()
    {
        for(int i = 0; i < accounts.size(); i++) {
            accounts[i]->displayAccount();
        }
    }

    ~Bank()
    {
        for(int i =0 ; i < accounts.size(); i++)
        {
            delete accounts[i];
        }
    }
};
int main()
{
    Bank myBank;

    SavingsAccount* s1 = new SavingsAccount(101, "Hasnain", 100000, 0.02);
    CurrentAccount* c1 = new CurrentAccount(201, "Ali", 50000, 10000);

    myBank.addAccount(s1);
    myBank.addAccount(c1);

    s1->deposit(5000);
    s1->withdraw(2000);

    c1->withdraw(55000); 
    c1->withdraw(10000); 

    myBank.processMonthlyUpdate();

    // Display accounts
    myBank.displayAllAccounts();

    return 0;
}