#include "Bank.h"

void Bank::addAcount(string accountNumber, double initialBalance) {
    accounts.push_back({accountNumber, initialBalance});
};

int Bank::findAccountIndex(string accountNumber) {
    for (size_t i=0; i < accounts.size(); i++) {
        if (accounts[i].accountNumber == accountNumber) {
            return i;
        }
    }
    return -1;
}

double Bank::getBalance(string accountNumber) {
    int index = findAccountIndex(accountNumber);
    if (index != -1) {
        return accounts[index].balance;
    }
    return -1;
};

int Bank::addBalance(string accountNumber, double balance) {
    int index = findAccountIndex(accountNumber);
    if (index != -1) {
        return accounts[index].balance += balance;
    }
    return -1;
}

int Bank::minusBalance(string accountNumber, double balance) {
    int index = findAccountIndex(accountNumber);
    if (index != -1) {
        return accounts[index].balance -= balance;
    }
    return -1;
}