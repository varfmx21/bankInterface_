#ifndef BANK_H
#define BANK_H

#include <iostream>
#include <vector>

using namespace std;

class Bank {
    public:
        void addAcount(string accountNumber, double initialBalance);
        int addBalance(string accountNumber, double balance);
        int minusBalance(string accountNumber, double balance);
        double getBalance(string accountNumber);
    
    private:
        struct BankAccount {
            string accountNumber;
            double balance;
        }; 
    
        vector<BankAccount> accounts;
        int findAccountIndex(string accountNumber);
    
};

#endif //BANK_H