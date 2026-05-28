#include<iostream>
using namespace std;

class BankAccount {
    int AccountNumber;
    double balance;

    public:
    BankAccount(int accountNumber, double balanceVal){
        AccountNumber = accountNumber;
        balance = balanceVal;

    }

    void deposite(double amount){
        balance+=amount;
    }

    void withdraw(double amount){
        if(amount<=balance){
            balance = balance - amount;
        }else{
        cout<<"sorry, you don't have sufficient balance \n";
    }
    }

    double getBalance(){
        return balance;
    }
};

int main(){
    BankAccount myaccount(142547896, 1000.0);
    myaccount.deposite(200.0);
    myaccount.withdraw(150.0);
    cout<<"Current available balance :"<<myaccount.getBalance()<<endl;
    return 0;
}